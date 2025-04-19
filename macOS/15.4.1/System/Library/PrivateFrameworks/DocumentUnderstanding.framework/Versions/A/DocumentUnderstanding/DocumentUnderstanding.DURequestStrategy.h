@class NSString;

@interface DocumentUnderstanding.DURequestStrategy : NSObject {
    void /* unknown type, empty encoding */ modelIdentifier;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ contentType;
@property (nonatomic, copy) NSString *modelIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ preprocess;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentType:(id)a0 preferredModelIdentifier:(id)a1 preprocess:(BOOL)a2;

@end
