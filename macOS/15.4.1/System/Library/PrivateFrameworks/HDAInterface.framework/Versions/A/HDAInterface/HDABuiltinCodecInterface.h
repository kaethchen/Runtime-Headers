@interface HDABuiltinCodecInterface : HDAInterface

+ (int)getBuiltInCodecIndex;
+ (int)getCodecCount;

- (void)dealloc;
- (id)init;
- (int)codecPoweredOn;
- (int)lockForExclusiveControl:(BOOL)a0;

@end
