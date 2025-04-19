@class NSNumber, CCItemMessage;
@protocol CCItemContent;

@interface CCSharedItem : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_sharedIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *sharedIdentifier;
@property (readonly, nonatomic) CCItemMessage<CCItemContent> *content;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContent:(id)a0 error:(id *)a1;
- (id)initWithSharedIdentifier:(id)a0 content:(id)a1;
- (BOOL)isEqualToSharedItem:(id)a0;

@end
