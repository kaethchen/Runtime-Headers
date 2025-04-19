@class NSString, ISPurchaseReceipt;

@interface ISAppleIDLookupOperation : ISOperation <ISURLOperationDelegate> {
    ISPurchaseReceipt *mReceipt;
}

@property (readonly) NSString *appleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appleIDLookupOperationForReceipt:(id)a0 storeClient:(id)a1;

- (void)run;
- (void).cxx_destruct;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)_newURLOperationWithURLBagType:(unsigned long long)a0;
- (id)_requestBodyData;
- (id)initWithReceipt:(id)a0 storeClient:(id)a1;

@end
