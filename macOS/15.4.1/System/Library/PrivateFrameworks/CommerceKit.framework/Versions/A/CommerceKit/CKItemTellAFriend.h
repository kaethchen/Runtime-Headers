@class NSString, NSDictionary, ISStoreURLOperation, NSHTTPURLResponse;

@interface CKItemTellAFriend : NSObject <ISStoreURLOperationDelegate> {
    NSDictionary *_properties;
    ISStoreURLOperation *_tellAFriendOperation;
    NSString *_tellAFriendSubject;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSHTTPURLResponse *_tellAFriendResponse;
}

@property (readonly, nonatomic) NSString *tellAFriendBody;
@property (readonly, nonatomic) NSString *tellAFriendBodyMIMEType;
@property (readonly, nonatomic) NSString *tellAFriendSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)operationFinished:(id)a0;
- (void)_finishTellAFriendLoadWithError:(id)a0;
- (id)_tellAFriendDictionary;
- (id)initWithItemDictionary:(id)a0;
- (BOOL)loadTellAFriendMessage:(id *)a0;
- (void)operation:(id)a0 didReceiveResponse:(id)a1;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;

@end
