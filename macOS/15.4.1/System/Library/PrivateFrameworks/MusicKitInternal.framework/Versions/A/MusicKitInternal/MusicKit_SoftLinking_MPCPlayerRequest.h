@class MPCPlayerRequest;
@protocol MusicKit_SoftLinking_MPCPlayerPath;

@interface MusicKit_SoftLinking_MPCPlayerRequest : NSObject {
    MPCPlayerRequest *_underlyingPlayerRequest;
}

@property (readonly, nonatomic) MPCPlayerRequest *_underlyingPlayerRequest;
@property (retain, nonatomic) id<MusicKit_SoftLinking_MPCPlayerPath> playerPath;
@property (nonatomic) long long forwardCount;
@property (nonatomic) long long historyCount;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (id)_errorFromUnderlyingError:(id)a0;
- (id)initWithUnderlyingPlayerRequest:(id)a0;

@end
