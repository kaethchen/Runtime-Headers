@class NSString, BlastDoorMetadata;

@interface BlastDoorChatSessionClose : NSObject {
    void /* unknown type, empty encoding */ chatSessionClose;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BOOL isEmergencySOS;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) BOOL deleteConversation;

- (id)init;
- (void).cxx_destruct;

@end
