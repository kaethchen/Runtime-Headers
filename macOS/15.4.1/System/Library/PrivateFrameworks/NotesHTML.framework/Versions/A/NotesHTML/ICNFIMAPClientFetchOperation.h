@class NSIndexSet, NSMutableArray;
@protocol ICNFIMAPFetchResponseHandler;

@interface ICNFIMAPClientFetchOperation : ICNFIMAPSingleClientOperation

@property (copy) NSIndexSet *messageNumbers;
@property (retain) NSMutableArray *dataItems;
@property (retain) id<ICNFIMAPFetchResponseHandler> responseHandler;
@property struct { unsigned long long x0; unsigned long long x1; } range;

+ (id)_headersToFetch;
+ (id)_fetchDataItemsForMessageSkeletonsWithHeaders:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)activityString;
- (BOOL)_isLegalRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)_newMessageSetCommandString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nsRangeForIMAPRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (void)addDataItem:(id)a0;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMessageNumbers:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)_fetchDataItemsForMessageSkeletonsWithAdditionalHeaderFields:(id)a0;
- (void)_imapClientFetchOperationCommonInitWithMessageNumbers:(id)a0;
- (void)addMessageSkeletonDataItemsWithAdditionalHeaderFields:(id)a0;
- (void)addMessageUidsAndFlagsDataItemsWithAdditionalHeaderFields:(id)a0;

@end
