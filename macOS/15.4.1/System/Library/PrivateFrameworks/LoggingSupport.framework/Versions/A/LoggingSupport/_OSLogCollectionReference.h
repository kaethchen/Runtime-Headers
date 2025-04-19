@class _OSLogDirectoryReference;

@interface _OSLogCollectionReference : NSObject

@property (readonly, nonatomic) _OSLogDirectoryReference *diagnosticsDirectoryReference;
@property (readonly, nonatomic) _OSLogDirectoryReference *timesyncReference;
@property (readonly, nonatomic) _OSLogDirectoryReference *UUIDTextReference;

+ (id)localDBRefWithError:(id *)a0;
+ (id)referenceWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)close;
- (id)initWithDiagnosticsDirectory:(id)a0 timesyncDirectory:(id)a1 UUIDTextDirectory:(id)a2;

@end
