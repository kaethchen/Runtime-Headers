@class NSIndexSet, NSString, NSMutableArray;
@protocol IMAPSyncSkeletonsOperationDelegate;

@interface IMAPSyncSkeletonsOperation : IMAPNetworkTaskOperation <IMAPFetchResponseHandler> {
    NSMutableArray *_fetchResponses;
}

@property (readonly, weak, nonatomic) id<IMAPSyncSkeletonsOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexSet *messageNumbers;
@property (readonly, nonatomic) BOOL useUIDs;
@property (readonly, nonatomic) BOOL includeLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxName:(id)a0;
- (id)_findFetchResponseWithMessageNumber:(unsigned long long)a0;
- (id)_findFetchResponseWithMessageNumber:(unsigned long long)a0 inIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)handleResponse:(id)a0 forCommand:(id)a1;
- (id)initWithMessageNumbers:(id)a0 useUIDsInstead:(BOOL)a1 includeLabels:(BOOL)a2 mailboxName:(id)a3 delegate:(id)a4;

@end
