@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long inboundPassOffset;
@property unsigned long long inboundPeekOffset;
@property unsigned long long outboundPassOffset;
@property unsigned long long outboundPeekOffset;
@property long long statisticsReportFrequency;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (long long)filterAction;
- (id)initWithDrop:(BOOL)a0 inboundPassOffset:(unsigned long long)a1 inboundPeekOffset:(unsigned long long)a2 outboundPassOffset:(unsigned long long)a3 outboundPeekOffset:(unsigned long long)a4;

@end
