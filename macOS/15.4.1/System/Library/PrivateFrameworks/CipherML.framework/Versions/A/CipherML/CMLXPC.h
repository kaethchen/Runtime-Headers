@interface CMLXPC : NSObject

+ (id)createConnection;
+ (id)interfaceDescription;
+ (id)asyncProxyToConnection:(id)a0 dispatchQueue:(id)a1 errorHandler:(id /* block */)a2;
+ (id)syncProxyToConnection:(id)a0 error:(id *)a1;

@end
