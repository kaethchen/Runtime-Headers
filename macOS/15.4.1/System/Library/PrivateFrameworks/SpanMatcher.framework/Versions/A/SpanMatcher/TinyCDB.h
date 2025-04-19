@class NSString;

@interface TinyCDB : NSObject {
    int _mode;
    int _fileDesc;
    struct cdb { int cdb_fd; unsigned int cdb_fsize; unsigned int cdb_dend; char *cdb_mem; unsigned int cdb_vpos; unsigned int cdb_vlen; unsigned int cdb_kpos; unsigned int cdb_klen; } _cdb;
    struct cdb_make { int cdb_fd; unsigned int cdb_dpos; unsigned int cdb_rcnt; unsigned char cdb_buf[4096]; char *cdb_bpos; struct cdb_rl *cdb_rec[256]; } _cdbmake;
    struct cdb_find { struct cdb *cdb_cdbp; unsigned int cdb_hval; char *cdb_htp; char *cdb_htab; char *cdb_htend; unsigned int cdb_httodo; void *cdb_key; unsigned int cdb_klen; } _cdbfind;
    char *buf;
    int blen;
}

@property (retain, nonatomic) NSString *path;

- (void).cxx_destruct;
- (void)setMode:(int)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (int)getMode;
- (void)_allocbuf:(int)a0;
- (id)initAtPath:(id)a0;
- (id)valuesFor:(id)a0;

@end
