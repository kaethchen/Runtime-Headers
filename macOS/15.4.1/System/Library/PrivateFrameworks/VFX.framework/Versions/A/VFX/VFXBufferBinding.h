@class NSString;

@interface VFXBufferBinding : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) long long frequency;

- (void)dealloc;

@end
