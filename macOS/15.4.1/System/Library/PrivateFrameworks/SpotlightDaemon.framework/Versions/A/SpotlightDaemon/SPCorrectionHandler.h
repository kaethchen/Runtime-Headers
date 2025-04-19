@class NSDictionary, NSURL, NSLock;

@interface SPCorrectionHandler : NSObject

@property (retain) NSDictionary *lastCommittedVersions;
@property int dictDirFd;
@property (retain) NSURL *versionInfoLocation;
@property (retain) NSLock *correctionRefsLock;
@property struct __CFDictionary { } *correctionRefs;

+ (id)sharedHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)commitDictionary:(void *)a0 language:(id)a1 version:(id)a2;
- (id)getCorrections:(id)a0 forLanguage:(id)a1 version:(id *)a2;
- (void *)openCorrectionRef:(id)a0 language:(id)a1 create:(BOOL)a2;
- (void)processCorrectionsWithHandle:(id)a0;
- (id)readCommittedVersions;
- (void)revokeUnusedFiles;
- (BOOL)sanityCheckFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)updateWithFileHandle:(id)a0;
- (void)updateWithFilePath:(id)a0;
- (id)versionForLanguage:(id)a0;
- (void)writeCommittedVersions:(id)a0;

@end
