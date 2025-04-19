@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 addressKind:(long long)a1;

@end
