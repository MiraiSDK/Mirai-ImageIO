//
//  CGImageProperties.h
//  ImageIO
//
//  Created by Chen Yonghui on 4/10/15.
//  Copyright (c) 2015 Shanghai TinyNetwork Inc. All rights reserved.
//

#ifndef __CGIMAGEPROPERTIES__
#define __CGIMAGEPROPERTIES__

#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CGBase.h>
#include <ImageIO/ImageIOBase.h>

//CF_IMPLICIT_BRIDGING_ENABLED

/* Properties that, if returned by CGImageSourceCopyProperties or
 * CGImageSourceCopyPropertiesAtIndex, contain a dictionary of file-format
 * or metadata-format specific key-values. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGIFDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyJFIFDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyRawDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyCIFFDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerCanonDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerNikonDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerMinoltaDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerFujiDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerOlympusDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerPentaxDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImageProperty8BIMDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyDNGDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyOpenEXRDictionary;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyMakerAppleDictionary;


/** Properties which may be returned by "CGImageSourceCopyProperties".  The
 ** values apply to the container in general but not necessarily to any
 ** individual image that it contains. **/

/* The size of the image file in bytes, if known. If present, the value of
 * this key is a CFNumberRef. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyFileSize;


/** Properties which may be returned by "CGImageSourceCopyPropertiesAtIndex".
 ** The values apply to a single image of an image source file. **/

/* The number of pixels in the x- and y-dimensions. The value of these keys
 * is a CFNumberRef. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPixelHeight;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPixelWidth;

/* The DPI in the x- and y-dimensions, if known. If present, the value of
 * these keys is a CFNumberRef. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyDPIHeight;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyDPIWidth;

/* The number of bits in each color sample of each pixel. The value of this
 * key is a CFNumberRef. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyDepth;

/* The intended display orientation of the image. If present, the value
 * of this key is a CFNumberRef with the same value as defined by the
 * TIFF and Exif specifications.  That is:
 *   1  =  0th row is at the top, and 0th column is on the left.
 *   2  =  0th row is at the top, and 0th column is on the right.
 *   3  =  0th row is at the bottom, and 0th column is on the right.
 *   4  =  0th row is at the bottom, and 0th column is on the left.
 *   5  =  0th row is on the left, and 0th column is the top.
 *   6  =  0th row is on the right, and 0th column is the top.
 *   7  =  0th row is on the right, and 0th column is the bottom.
 *   8  =  0th row is on the left, and 0th column is the bottom.
 * If not present, a value of 1 is assumed. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyOrientation;

/* The value of this key is kCFBooleanTrue if the image contains floating-
 * point pixel samples */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIsFloat;

/* The value of this key is kCFBooleanTrue if the image contains indexed
 * (a.k.a. paletted) pixel samples */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIsIndexed;

/* The value of this key is kCFBooleanTrue if the image contains an alpha
 * (a.k.a. coverage) channel */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyHasAlpha;

/* The color model of the image such as "RGB", "CMYK", "Gray", or "Lab".
 * The value of this key is CFStringRef. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyColorModel;

/* The name of the optional ICC profile embedded in the image, if known.
 * If present, the value of this key is a CFStringRef. */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyProfileName;


/* Possible values for kCGImagePropertyColorModel property */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyColorModelRGB;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyColorModelGray;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyColorModelCMYK;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyColorModelLab;


/* Possible keys for kCGImagePropertyTIFFDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFCompression;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFPhotometricInterpretation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFDocumentName;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFImageDescription;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFMake;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFModel;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFOrientation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFXResolution;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFYResolution;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFResolutionUnit;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFSoftware;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFTransferFunction;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFDateTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFArtist;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFHostComputer;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFCopyright;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFWhitePoint;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyTIFFPrimaryChromaticities;

/* Possible keys for kCGImagePropertyJFIFDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyJFIFVersion;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyJFIFXDensity;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyJFIFYDensity;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyJFIFDensityUnit;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyJFIFIsProgressive;


/* Possible keys for kCGImagePropertyExifDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifExposureTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFNumber;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifExposureProgram;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSpectralSensitivity;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifISOSpeedRatings;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifOECF;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSensitivityType;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifStandardOutputSensitivity;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifRecommendedExposureIndex;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifISOSpeed;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifISOSpeedLatitudeyyy;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifISOSpeedLatitudezzz;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifVersion;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifDateTimeOriginal;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifDateTimeDigitized;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifComponentsConfiguration;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifCompressedBitsPerPixel;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifShutterSpeedValue;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifApertureValue;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifBrightnessValue;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifExposureBiasValue;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifMaxApertureValue;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubjectDistance;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifMeteringMode;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifLightSource;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFlash;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFocalLength;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubjectArea;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifMakerNote;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifUserComment;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubsecTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubsecTimeOrginal;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubsecTimeDigitized;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFlashPixVersion;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifColorSpace;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifPixelXDimension;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifPixelYDimension;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifRelatedSoundFile;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFlashEnergy;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSpatialFrequencyResponse;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFocalPlaneXResolution;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFocalPlaneYResolution;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFocalPlaneResolutionUnit;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubjectLocation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifExposureIndex;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSensingMethod;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFileSource;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSceneType;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifCFAPattern;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifCustomRendered;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifExposureMode;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifWhiteBalance;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifDigitalZoomRatio;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifFocalLenIn35mmFilm;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSceneCaptureType;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifGainControl;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifContrast;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSaturation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSharpness;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifDeviceSettingDescription;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifSubjectDistRange;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifImageUniqueID;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifCameraOwnerName;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifBodySerialNumber;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifLensSpecification;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifLensMake;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifLensModel;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifLensSerialNumber;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifGamma;

/* Possible keys for kCGImagePropertyExifAuxDictionary */
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxLensInfo  ;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxLensModel;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxSerialNumber  ;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxLensID;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxLensSerialNumber  ;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxImageNumber;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxFlashCompensation ;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxOwnerName ;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyExifAuxFirmware  ;

/* Possible keys for kCGImagePropertyGIFDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGIFLoopCount;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGIFDelayTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGIFImageColorMap;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGIFHasGlobalColorMap;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGIFUnclampedDelayTime;

/* Possible keys for kCGImagePropertyPNGDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGGamma;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGInterlaceType;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGXPixelsPerMeter;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGYPixelsPerMeter;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGsRGBIntent;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGChromaticities;

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGAuthor;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGCopyright;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGCreationTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGDescription;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGModificationTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGSoftware;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyPNGTitle;

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyAPNGLoopCount;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyAPNGDelayTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyAPNGUnclampedDelayTime;

/* Possible keys for kCGImagePropertyGPSDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSVersion;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSLatitudeRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSLatitude;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSLongitudeRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSLongitude;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSAltitudeRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSAltitude;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSTimeStamp;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSSatellites;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSStatus;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSMeasureMode;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDOP;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSSpeedRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSSpeed;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSTrackRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSTrack;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSImgDirectionRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSImgDirection;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSMapDatum;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestLatitudeRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestLatitude;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestLongitudeRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestLongitude;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestBearingRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestBearing;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestDistanceRef;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDestDistance;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSProcessingMethod;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSAreaInformation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDateStamp;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSDifferental;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyGPSHPositioningError;

/* Possible keys for kCGImagePropertyIPTCDictionary */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCObjectTypeReference;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCObjectAttributeReference;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCObjectName;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCEditStatus;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCEditorialUpdate;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCUrgency;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCSubjectReference;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCategory;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCSupplementalCategory;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCFixtureIdentifier;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCKeywords;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContentLocationCode;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContentLocationName;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCReleaseDate;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCReleaseTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCExpirationDate;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCExpirationTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCSpecialInstructions;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCActionAdvised;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCReferenceService;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCReferenceDate;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCReferenceNumber;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCDateCreated;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCTimeCreated;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCDigitalCreationDate;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCDigitalCreationTime;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCOriginatingProgram;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCProgramVersion;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCObjectCycle;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCByline;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCBylineTitle;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCity;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCSubLocation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCProvinceState;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCountryPrimaryLocationCode;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCountryPrimaryLocationName;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCOriginalTransmissionReference;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCHeadline;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCredit;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCSource;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCopyrightNotice;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContact;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCaptionAbstract;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCWriterEditor;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCImageType;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCImageOrientation;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCLanguageIdentifier;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCStarRating;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCCreatorContactInfo;  // IPTC Core
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCRightsUsageTerms;    // IPTC Core
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCScene;               // IPTC Core

/* Possible keys for kCGImagePropertyIPTCCreatorContactInfo dictionary (part of IPTC Core - above) */

IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoCity;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoCountry;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoAddress;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoPostalCode;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoStateProvince;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoEmails;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoPhones;
IMAGEIO_EXTERN const CFStringRef kCGImagePropertyIPTCContactInfoWebURLs;

/* Possible keys for kCGImageProperty8BIMDictionary */

IMAGEIO_EXTERN const CFStringRef  kCGImageProperty8BIMLayerNames;
IMAGEIO_EXTERN const CFStringRef  kCGImageProperty8BIMVersion;

/* Possible keys for kCGImagePropertyDNGDictionary */

IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyDNGVersion;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyDNGBackwardVersion;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyDNGUniqueCameraModel;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyDNGLocalizedCameraModel;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyDNGCameraSerialNumber;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyDNGLensInfo;


/* Possible keys for kCGImagePropertyCIFFDictionary */

IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFDescription;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFFirmware;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFOwnerName;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFImageName;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFImageFileName;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFReleaseMethod;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFReleaseTiming;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFRecordID;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFSelfTimingTime;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFCameraSerialNumber;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFImageSerialNumber;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFContinuousDrive;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFFocusMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFMeteringMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFShootingMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFLensModel;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFLensMaxMM;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFLensMinMM;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFWhiteBalanceIndex;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFFlashExposureComp;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyCIFFMeasuredEV;


/* Possible keys for kCGImagePropertyMakerNikonDictionary */

IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonISOSetting;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonColorMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonQuality;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonWhiteBalanceMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonSharpenMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonFocusMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonFlashSetting;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonISOSelection;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonFlashExposureComp;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonImageAdjustment;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonLensAdapter;
IMAGEIO_EXTERN const CFStringRef     kCGImagePropertyMakerNikonLensType;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonLensInfo;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonFocusDistance;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonDigitalZoom;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonShootingMode;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonCameraSerialNumber;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerNikonShutterCount;

/* Possible keys for kCGImagePropertyMakerCanonDictionary */

IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonOwnerName;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonCameraSerialNumber;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonImageSerialNumber;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonFlashExposureComp;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonContinuousDrive;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonLensModel;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonFirmware  ;
IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyMakerCanonAspectRatioInfo;

/* Possible keys for kCGImagePropertyOpenEXRDictionary */

IMAGEIO_EXTERN const CFStringRef  kCGImagePropertyOpenEXRAspectRatio;


/* Possible int values for kCGImagePropertyTIFFOrientation */
enum CGImagePropertyOrientation {
    kCGImagePropertyOrientationUp = 1,        // 0th row at top,    0th column on left   - default orientation
    kCGImagePropertyOrientationUpMirrored,    // 0th row at top,    0th column on right  - horizontal flip
    kCGImagePropertyOrientationDown,          // 0th row at bottom, 0th column on right  - 180 deg rotation
    kCGImagePropertyOrientationDownMirrored,  // 0th row at bottom, 0th column on left   - vertical flip
    kCGImagePropertyOrientationLeftMirrored,  // 0th row on left,   0th column at top
    kCGImagePropertyOrientationRight,         // 0th row on right,  0th column at top    - 90 deg CW
    kCGImagePropertyOrientationRightMirrored, // 0th row on right,  0th column on bottom
    kCGImagePropertyOrientationLeft           // 0th row on left,   0th column at bottom - 90 deg CCW
};
typedef enum CGImagePropertyOrientation CGImagePropertyOrientation;

//CF_IMPLICIT_BRIDGING_DISABLED

#endif  /* __CGIMAGEPROPERTIES__ */
