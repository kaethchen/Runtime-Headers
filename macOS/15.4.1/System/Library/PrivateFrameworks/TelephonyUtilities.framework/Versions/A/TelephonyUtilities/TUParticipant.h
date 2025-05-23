@class NSURL, NSString, TUSandboxExtendedURL;

@interface TUParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedImageURL;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithParticipant:(id)a0;
- (BOOL)isEqualToParticipant:(id)a0;
- (id)archivedDataWithError:(id *)a0;

@end
