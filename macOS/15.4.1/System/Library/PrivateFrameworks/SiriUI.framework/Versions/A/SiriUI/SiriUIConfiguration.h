@interface SiriUIConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isSystemHostedPresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initAsSystemHostedPresentation:(BOOL)a0;

@end
