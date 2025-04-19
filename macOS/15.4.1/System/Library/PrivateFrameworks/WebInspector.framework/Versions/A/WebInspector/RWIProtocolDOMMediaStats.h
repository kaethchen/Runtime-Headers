@class NSString, RWIProtocolDOMViewportSize, RWIProtocolDOMVideoMediaStats, RWIProtocolDOMVideoPlaybackQuality, RWIProtocolDOMAudioMediaStats;

@interface RWIProtocolDOMMediaStats : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDOMAudioMediaStats *audio;
@property (retain, nonatomic) RWIProtocolDOMVideoMediaStats *video;
@property (nonatomic) double devicePixelRatio;
@property (retain, nonatomic) RWIProtocolDOMViewportSize *viewport;
@property (retain, nonatomic) RWIProtocolDOMVideoPlaybackQuality *quality;
@property (copy, nonatomic) NSString *source;

@end
