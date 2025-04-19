@class NSXPCConnection;

@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)rankedHandlesFromCandidateHandles:(id)a0;

@end
