@class NSString;

@interface ASUSQLitePreparedStatement : NSObject {
    const void *_connectionPointer;
    NSString *_SQL;
}

- (void).cxx_destruct;

@end
