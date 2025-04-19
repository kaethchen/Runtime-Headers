@interface UINSDragOperationMasks : NSObject <UINSDragOperationMasks>

@property (readonly, nonatomic) unsigned long long insideAppMask;
@property (readonly, nonatomic) unsigned long long outsideAppMask;

- (id)initWithInsideAppMask:(unsigned long long)a0 outsideAppMask:(unsigned long long)a1;

@end
