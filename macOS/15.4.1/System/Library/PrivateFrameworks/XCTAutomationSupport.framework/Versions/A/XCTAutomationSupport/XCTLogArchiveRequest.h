@class NSDate, NSString, NSXPCConnection;

@interface XCTLogArchiveRequest : NSObject <XCTLogArchiveRequesting> {
    struct atomic_flag { _Atomic BOOL _Value; } _hasExecuted;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSString *outputPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logArchiveCollectorConnection;
+ (id)requestWithStartDate:(id)a0 outputPath:(id)a1;

@end
