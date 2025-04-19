@class NSData, NSString, NSObject;

@interface NSURLSessionWebSocketMessage : NSObject {
    NSObject *content;
}

@property (readonly) long long type;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;

@end
