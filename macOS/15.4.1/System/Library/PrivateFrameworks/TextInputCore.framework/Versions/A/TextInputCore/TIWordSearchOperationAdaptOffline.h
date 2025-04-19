@class TIMecabraWrapper, NSString, TILanguageModelAdaptationContext;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (copy, nonatomic) NSString *paragraph;
@property (nonatomic) double timeStamp;

- (void).cxx_destruct;
- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)a0 paragraph:(id)a1 adaptationContext:(id)a2 timeStamp:(double)a3;

@end
