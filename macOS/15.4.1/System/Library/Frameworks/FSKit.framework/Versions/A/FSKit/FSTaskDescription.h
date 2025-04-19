@class NSString, NSUUID, FSContainerIdentifier, NSError, NSObject, FSResource;

@interface FSTaskDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject *taskReferenceHolder;
@property (copy) NSString *taskInitiatorID;
@property (copy) NSString *taskSigningID;
@property BOOL terminateExtensionWhenFinished;
@property (retain) NSObject *taskReferenceHolder;
@property (copy) NSString *taskInitiatorID;
@property (copy) NSString *taskSigningID;
@property BOOL terminateExtensionWhenFinished;
@property (readonly, copy) NSUUID *taskID;
@property (readonly) unsigned char taskState;
@property (readonly, retain) NSError *taskErrorState;
@property (readonly, copy) NSString *taskBundleID;
@property (readonly, copy) FSContainerIdentifier *taskExtensionInstanceID;
@property (readonly, copy) NSString *taskPurpose;
@property (readonly, copy) FSResource *taskResource;

+ (id)taskDescriptionWithID:(id)a0 state:(unsigned char)a1 purpose:(id)a2 error:(id)a3 bundleID:(id)a4 extensionID:(id)a5 resource:(id)a6;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 state:(unsigned char)a1 purpose:(id)a2 error:(id)a3 bundleID:(id)a4 extensionID:(id)a5 resource:(id)a6;
- (id)updatedDescriptionInState:(unsigned char)a0 error:(id)a1;

@end
