@class NSDictionary, NSMutableDictionary, NSSet;

@interface CRKAnnotatedCredentialManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *annotationsByPersistentID;
@property (nonatomic) BOOL modified;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy, nonatomic) NSSet *persistentIDs;

+ (id)manifestWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (void)addPersistentID:(id)a0 withAnnotation:(id)a1;
- (id)annotationForPersistentID:(id)a0;
- (void)removePersistentID:(id)a0;

@end
