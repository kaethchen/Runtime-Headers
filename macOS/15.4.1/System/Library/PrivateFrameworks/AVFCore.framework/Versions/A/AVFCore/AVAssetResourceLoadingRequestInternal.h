@class AVWeakReference, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestor, NSDictionary, NSURLResponse, NSObject, AVDispatchOnce, NSMutableData, NSMutableURLRequest, NSURLRequest;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoadingRequestInternal : NSObject {
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    struct OpaqueFigCustomURLLoader { } *customURLLoader;
    struct OpaqueFigCustomURLHandler { } *customURLHandler;
    struct __CFDictionary { } *requestInfo;
    unsigned long long requestID;
    AVDispatchOnce *responseInfoSentOnceToken;
    NSMutableURLRequest *URLRequest;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    id /* block */ streamingKeyRequestCompletionHandler;
    struct OpaqueFigCPECryptor { } *figCryptor;
    AVAssetResourceLoadingRequestor *requestor;
    unsigned long long cryptorKeyRequestID;
}

@end
