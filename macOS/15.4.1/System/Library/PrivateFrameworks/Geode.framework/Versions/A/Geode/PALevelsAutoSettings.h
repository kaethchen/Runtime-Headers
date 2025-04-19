@interface PALevelsAutoSettings : IPAAutoSettings

@property (nonatomic) int inputMode;
@property (nonatomic) struct { struct { double src; double dst; } black; struct { double src; double dst; } shadow; struct { double src; double dst; } mid; struct { double src; double dst; } hilight; struct { double src; double dst; } white; } luminance;
@property (nonatomic) struct { struct { double src; double dst; } black; struct { double src; double dst; } shadow; struct { double src; double dst; } mid; struct { double src; double dst; } hilight; struct { double src; double dst; } white; } red;
@property (nonatomic) struct { struct { double src; double dst; } black; struct { double src; double dst; } shadow; struct { double src; double dst; } mid; struct { double src; double dst; } hilight; struct { double src; double dst; } white; } green;
@property (nonatomic) struct { struct { double src; double dst; } black; struct { double src; double dst; } shadow; struct { double src; double dst; } mid; struct { double src; double dst; } hilight; struct { double src; double dst; } white; } blue;

- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
