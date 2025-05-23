@class NSString, NSDictionary, NSDate, AVPlayerItemErrorLogEventInternal;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) long long errorStatusCode;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSString *errorComment;
@property (readonly, nonatomic) NSDictionary *allHTTPResponseHeaderFields;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)_common_init;

@end
