@class NSString, NSUUID, NSURL, NSDate, NSNumber;

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSString *_contentText;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *creationDate;
@property (retain) NSString *uti;
@property (retain) NSUUID *identifier;
@property (retain) NSUUID *cloudIdentifier;
@property (retain) NSString *photoLocalIdentifier;
@property (retain) NSNumber *size;
@property (retain) NSURL *contentURL;
@property (retain) NSString *contentText;
@property (copy, nonatomic) NSString *photoSceneDescriptor;
@property (copy, nonatomic) NSString *personInPhoto;

+ (id)attachmentWithIdentifier:(id)a0 cloudIdentifier:(id)a1 type:(id)a2 sizeInBytes:(id)a3 creationDate:(id)a4;
+ (id)attachmentWithIdentifier:(id)a0 cloudIdentifier:(id)a1 type:(id)a2 sizeInBytes:(id)a3 creationDate:(id)a4 contentURL:(id)a5 contentText:(id)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)descriptionRedacted:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 cloudIdentifier:(id)a1 photoLocalIdentifier:(id)a2 type:(id)a3 sizeInBytes:(id)a4 creationDate:(id)a5 contentURL:(id)a6 contentText:(id)a7;
- (id)initWithIdentifier:(id)a0 cloudIdentifier:(id)a1 photoLocalIdentifier:(id)a2 type:(id)a3 sizeInBytes:(id)a4 creationDate:(id)a5 contentURL:(id)a6 contentText:(id)a7 photoSceneDescriptor:(id)a8 personInPhoto:(id)a9;
- (id)initWithIdentifier:(id)a0 cloudIdentifier:(id)a1 type:(id)a2 sizeInBytes:(id)a3 creationDate:(id)a4 contentURL:(id)a5 contentText:(id)a6;

@end
