@interface MTRPluginThirdPartyExclusions : NSObject

+ (BOOL)attributeReadDisallowedOverXPCWithEndpointID:(id)a0 clusterID:(id)a1 attribute:(id)a2 isPrivatelyEntitled:(BOOL)a3;
+ (BOOL)attributeWriteDisallowedOverXPCWithEndpointID:(id)a0 clusterID:(id)a1 attribute:(id)a2 isPrivatelyEntitled:(BOOL)a3;
+ (BOOL)commandDisallowedOverXPCWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 isPrivatelyEntitled:(BOOL)a3;
+ (BOOL)connectionIsPrivatelyEntitled:(id)a0;

@end
