@class NSString, NSArray, NSUUID, NSDate, NSURL, NSData;

@interface _PSAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *UTI;
@property (readonly, copy, nonatomic) NSString *photoLocalIdentifier;
@property (readonly, copy, nonatomic) NSArray *photoLocalIdentifiers;
@property (readonly, copy, nonatomic) NSArray *suggestedContactIdentifiers;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *cloudIdentifier;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSArray *photoSceneDescriptors;
@property (copy, nonatomic) NSArray *peopleInPhoto;
@property (readonly, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSData *contentURLSandboxExtension;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSuggestedContactIdentifiers:(id)a0;
- (id)initWithCreationDate:(id)a0 UTI:(id)a1 photoLocalIdentifier:(id)a2 identifier:(id)a3 cloudIdentifier:(id)a4 contentURL:(id)a5 contentText:(id)a6;
- (id)initWithCreationDate:(id)a0 UTI:(id)a1 photoLocalIdentifier:(id)a2 identifier:(id)a3 cloudIdentifier:(id)a4 contentURL:(id)a5 contentText:(id)a6 imageData:(id)a7;
- (id)initWithCreationDate:(id)a0 UTI:(id)a1 photoLocalIdentifier:(id)a2 identifier:(id)a3 cloudIdentifier:(id)a4 contentURL:(id)a5 contentText:(id)a6 imageData:(id)a7 photoLocalIdentifiers:(id)a8 suggestedContactIdentifiers:(id)a9;
- (id)initWithCreationDate:(id)a0 UTI:(id)a1 photoLocalIdentifier:(id)a2 identifier:(id)a3 cloudIdentifier:(id)a4 contentURL:(id)a5 contentText:(id)a6 imageData:(id)a7 photoLocalIdentifiers:(id)a8 suggestedContactIdentifiers:(id)a9 photoSceneDescriptors:(id)a10 peopleInPhoto:(id)a11;
- (unsigned char)photoAnalysisRequestType;
- (unsigned long long)totalHashOfElementsFromArray:(id)a0;

@end
