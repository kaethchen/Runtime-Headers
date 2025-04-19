@class LASecureIOServer;

@interface LASecureIOLocal : LASecureIOCommunication {
    LASecureIOServer *_server;
}

- (id)init;
- (void).cxx_destruct;
- (long long)executeCommand:(unsigned int)a0 withData:(id)a1 andResponse:(id *)a2;

@end
