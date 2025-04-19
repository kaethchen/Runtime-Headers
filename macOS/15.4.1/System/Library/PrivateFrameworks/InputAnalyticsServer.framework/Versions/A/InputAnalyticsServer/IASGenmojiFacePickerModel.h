@class NSNumber, NSMutableDictionary;

@interface IASGenmojiFacePickerModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *carouselFaces;
@property (copy, nonatomic) NSNumber *selectedFace;

+ (BOOL)willHandleSignal:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)consumeAction:(id)a0;
- (unsigned long long)numEmptyCarouselWithinTimeInterval:(double)a0 facePickerAppearTime:(id)a1;

@end
