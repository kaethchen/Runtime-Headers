@class NSUUID, CRNormalizedPolyline, CRNormalizedQuad, NSArray, NSDictionary, NSString;
@protocol CRScriptCategory;

@interface CRMutableDetectedLineRegion : CRDetectedLineRegion

@property (retain) CRNormalizedQuad *boundingQuad;
@property unsigned long long layoutDirection;
@property BOOL isCurved;
@property (retain) NSUUID *uuid;
@property (retain) CRNormalizedPolyline *polygon;
@property BOOL shouldRunSequenceScript;
@property BOOL shouldRunSequenceOrientation;
@property BOOL shouldRotate180DetectorOrientationFallback;
@property (retain) NSArray *scriptCategoryResults;
@property (retain) id<CRScriptCategory> topScriptCategory;
@property (retain) NSDictionary *scriptCategoryCounts;
@property (retain) NSString *sequenceScriptOutputResult;
@property unsigned long long nmsOutputScale;
@property unsigned long long textType;

- (void)rotate180;

@end
