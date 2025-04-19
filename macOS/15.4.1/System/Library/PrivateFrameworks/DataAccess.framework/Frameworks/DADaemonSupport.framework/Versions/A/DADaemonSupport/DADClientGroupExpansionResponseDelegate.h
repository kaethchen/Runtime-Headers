@class NSString, NSData;

@interface DADClientGroupExpansionResponseDelegate : DADClientDelegate <DAEventsGroupExpansionResponseConsumer> {
    NSString *_principalPath;
    NSData *_resultsData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)performRequest;
- (void)groupExpansionFinishedWithResults:(id)a0 error:(id)a1;
- (id)initWithAccountID:(id)a0 client:(id)a1 principalPath:(id)a2;

@end
