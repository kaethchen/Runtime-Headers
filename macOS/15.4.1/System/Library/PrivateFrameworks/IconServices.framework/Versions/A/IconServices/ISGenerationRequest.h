@class ISImageDescriptor, ISConcreteIcon, NSUUID;

@interface ISGenerationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property (retain) NSUUID *lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_decorationRecipeKeyFromTypeIdentifier:(id)a0 position:(long long)a1;
- (id)generateImage;
- (id)generateImageReturningRecordIdentifiers:(id *)a0;
- (id)iconSpecificationFromRecipe:(id)a0;
- (void)sendAnalytics:(id)a0 compositor:(id)a1 imageDescriptor:(id)a2;

@end
