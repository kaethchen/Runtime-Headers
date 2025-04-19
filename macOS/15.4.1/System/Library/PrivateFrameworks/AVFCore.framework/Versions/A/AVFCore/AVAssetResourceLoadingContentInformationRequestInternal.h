@class NSString, NSArray, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSString *contentType;
    NSArray *allowedContentTypes;
    long long contentLength;
    BOOL entireLengthAvailableOnDemand;
    BOOL byteRangeAccessSupported;
    NSDate *renewalDate;
    BOOL diskCachingPermitted;
}

@end
