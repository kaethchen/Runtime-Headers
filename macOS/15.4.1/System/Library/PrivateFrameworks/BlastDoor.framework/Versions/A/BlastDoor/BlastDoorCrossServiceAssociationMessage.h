@class NSString, NSUUID, BlastDoorMetadata;

@interface BlastDoorCrossServiceAssociationMessage : NSObject {
    void /* unknown type, empty encoding */ crossServiceAssociationMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSUUID *replacementGUID;

- (id)init;
- (void).cxx_destruct;

@end
