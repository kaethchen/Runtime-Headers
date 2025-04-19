@class NSURL, NSString;

@interface BMResourceContainer : NSObject <NSObject, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char containerType;
@property (nonatomic) unsigned char availabilityState;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (BOOL)isEqualToContainer:(id)a0;
- (id)initWithURL:(id)a0 personaIdentifier:(id)a1;
- (BOOL)isInUserVault;

@end
