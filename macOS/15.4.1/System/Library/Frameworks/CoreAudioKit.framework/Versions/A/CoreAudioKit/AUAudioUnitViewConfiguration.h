@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double width;
@property (readonly) double height;
@property (readonly) BOOL hostHasController;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWidth:(double)a0 height:(double)a1 hostHasController:(BOOL)a2;

@end
