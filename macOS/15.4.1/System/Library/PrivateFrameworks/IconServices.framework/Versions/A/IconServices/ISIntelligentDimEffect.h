@class NSString;

@interface ISIntelligentDimEffect : NSObject <ISEffect>

@property BOOL flagDimming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
