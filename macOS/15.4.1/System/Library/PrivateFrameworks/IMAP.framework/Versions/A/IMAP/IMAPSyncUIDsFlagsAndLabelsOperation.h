@class NSIndexSet, NSString, NSMutableIndexSet, NSMutableArray;
@protocol IMAPSyncUIDsFlagsAndLabelsOperationDelegate;

@interface IMAPSyncUIDsFlagsAndLabelsOperation : IMAPNetworkTaskOperation <IMAPFetchResponseHandler> {
    NSMutableArray *_fetchResponses;
    NSMutableIndexSet *_vanishedUIDs;
}

@property (readonly, weak, nonatomic) id<IMAPSyncUIDsFlagsAndLabelsOperationDelegate> delegate;
@property (readonly, nonatomic) unsigned int highestKnownUID;
@property (readonly, copy, nonatomic) NSIndexSet *messageNumbers;
@property (readonly, nonatomic) unsigned long long changedSince;
@property (readonly, nonatomic) BOOL includeLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxName:(id)a0;
- (void)_imapSyncUIDsFlagsAndLabelsOperationCommonInitIncludeLabels:(BOOL)a0 delegate:(id)a1;
- (id)_syncUIDsFlagsAndLabelsOperationDescription:(id)a0;
- (BOOL)handleResponse:(id)a0 forCommand:(id)a1;
- (id)initWithChangedSince:(unsigned long long)a0 highestKnownUID:(unsigned int)a1 includeLabels:(BOOL)a2 mailboxName:(id)a3 delegate:(id)a4;
- (id)initWithMessageNumbers:(id)a0 includeLabels:(BOOL)a1 mailboxName:(id)a2 delegate:(id)a3;

@end
