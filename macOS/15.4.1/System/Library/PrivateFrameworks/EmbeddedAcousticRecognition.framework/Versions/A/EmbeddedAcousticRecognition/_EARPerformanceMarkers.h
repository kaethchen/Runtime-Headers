@class NSArray;

@interface _EARPerformanceMarkers : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *correctPartialResultIndexList;
@property (readonly, copy, nonatomic) NSArray *correctAlignedPartialResultIndexList;
@property (readonly, copy, nonatomic) NSArray *tokenDelayInMilliSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCorrectPartialResultIndexList:(id)a0 correctAlignedPartialResultIndexList:(id)a1 tokenDelayInMilliseconds:(id)a2;

@end
