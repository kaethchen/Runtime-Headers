@class NWPath;

@interface NENexusPathFlow : NENexusFlow {
    NWPath *_path;
}

- (void).cxx_destruct;
- (id)endpoint;
- (id)parameters;
- (id)clientIdentifier;

@end
