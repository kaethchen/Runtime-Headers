@class NEIKEv2IKESPI;
@protocol NEIKEv2TransportDelegate;

@interface NEIKEv2TransportClient : NSObject {
    NEIKEv2IKESPI *_clientSPI;
    NEIKEv2IKESPI *_remoteSPI;
    id<NEIKEv2TransportDelegate> _delegate;
}

- (id)description;
- (void).cxx_destruct;

@end
