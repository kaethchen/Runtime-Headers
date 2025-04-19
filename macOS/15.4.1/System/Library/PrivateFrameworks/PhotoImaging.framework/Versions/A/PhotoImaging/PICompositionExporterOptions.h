@class NUPriority, NSString, NUColorSpace, PIBrushStrokeHistory;
@protocol NUScalePolicy;

@interface PICompositionExporterOptions : NSObject

@property (retain) NUPriority *priority;
@property (retain) NUColorSpace *colorSpace;
@property (copy) NSString *pairingIdentifier;
@property (retain) id<NUScalePolicy> scalePolicy;
@property (nonatomic) BOOL exportSidecarData;
@property (retain) PIBrushStrokeHistory *brushStrokeHistory;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
