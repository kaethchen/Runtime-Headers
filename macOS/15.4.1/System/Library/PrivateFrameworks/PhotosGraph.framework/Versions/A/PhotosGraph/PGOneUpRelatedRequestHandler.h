@class NSString, NSArray, NSError;

@interface PGOneUpRelatedRequestHandler : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ _graphManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(NSString *)a0 error:(void (^)(NSArray *, NSError *))a1;
- (id)initWithGraphManager:(id)a0 error:(id *)a1;
- (void)requestAssetLocalIdentifiersTakenNearCoordinatesFromAssetLocalIdentifier:(NSString *)a0 error:(void (^)(NSArray *, NSError *))a1;

@end
