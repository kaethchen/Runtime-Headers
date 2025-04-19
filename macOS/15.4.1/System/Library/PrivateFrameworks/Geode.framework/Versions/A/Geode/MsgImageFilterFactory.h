@interface MsgImageFilterFactory : NSObject <CIFilterConstructor>

+ (void)initialize;

- (id)filterWithName:(id)a0;
- (id)kernelsFor:(id)a0;

@end
