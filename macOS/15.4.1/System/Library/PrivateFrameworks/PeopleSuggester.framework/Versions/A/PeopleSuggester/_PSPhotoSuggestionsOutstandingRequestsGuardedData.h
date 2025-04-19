@class NSMutableDictionary;

@interface _PSPhotoSuggestionsOutstandingRequestsGuardedData : NSObject {
    BOOL _waitingForRequestIDForCurrentThread;
    NSMutableDictionary *_outstandingRequests;
}

- (id)init;
- (void).cxx_destruct;

@end
