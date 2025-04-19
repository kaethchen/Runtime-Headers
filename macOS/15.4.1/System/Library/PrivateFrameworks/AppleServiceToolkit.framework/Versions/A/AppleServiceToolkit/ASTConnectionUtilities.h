@interface ASTConnectionUtilities : NSObject

+ (id)MD5HeaderValueForTask:(id)a0;
+ (unsigned long long)allowCellularSizeThreshold;
+ (BOOL)didEncounterNetworkDisconnectionError:(id)a0;
+ (id)getServerLoggingSelection;
+ (BOOL)isGzipEnabled;
+ (BOOL)isValidResponse:(id)a0;
+ (BOOL)relaxTimeouts;
+ (BOOL)trustIsValidWithProtectionSpace:(id)a0 rootOfTrust:(unsigned long long)a1;
+ (BOOL)useChunkedTransferEncoding;

@end
