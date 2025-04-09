/* A Bison parser, made by GNU Bison 3.7.91.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED
# define YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    FCONST = 259,                  /* FCONST  */
    SCONST = 260,                  /* SCONST  */
    BCONST = 261,                  /* BCONST  */
    XCONST = 262,                  /* XCONST  */
    Op = 263,                      /* Op  */
    ICONST = 264,                  /* ICONST  */
    PARAM = 265,                   /* PARAM  */
    TYPECAST = 266,                /* TYPECAST  */
    DOT_DOT = 267,                 /* DOT_DOT  */
    COLON_EQUALS = 268,            /* COLON_EQUALS  */
    EQUALS_GREATER = 269,          /* EQUALS_GREATER  */
    INTEGER_DIVISION = 270,        /* INTEGER_DIVISION  */
    POWER_OF = 271,                /* POWER_OF  */
    SINGLE_ARROW = 272,            /* SINGLE_ARROW  */
    DOUBLE_ARROW = 273,            /* DOUBLE_ARROW  */
    SHIFT_RIGHT = 274,             /* SHIFT_RIGHT  */
    SHIFT_LEFT = 275,              /* SHIFT_LEFT  */
    LESS_EQUALS = 276,             /* LESS_EQUALS  */
    GREATER_EQUALS = 277,          /* GREATER_EQUALS  */
    NOT_EQUALS = 278,              /* NOT_EQUALS  */
    ABORT_P = 279,                 /* ABORT_P  */
    ABSOLUTE_P = 280,              /* ABSOLUTE_P  */
    ACCESS = 281,                  /* ACCESS  */
    ACTION = 282,                  /* ACTION  */
    ADD_P = 283,                   /* ADD_P  */
    ADMIN = 284,                   /* ADMIN  */
    AFTER = 285,                   /* AFTER  */
    AGGREGATE = 286,               /* AGGREGATE  */
    ALL = 287,                     /* ALL  */
    ALSO = 288,                    /* ALSO  */
    ALTER = 289,                   /* ALTER  */
    ALWAYS = 290,                  /* ALWAYS  */
    ANALYSE = 291,                 /* ANALYSE  */
    ANALYZE = 292,                 /* ANALYZE  */
    AND = 293,                     /* AND  */
    ANTI = 294,                    /* ANTI  */
    ANY = 295,                     /* ANY  */
    ARRAY = 296,                   /* ARRAY  */
    AS = 297,                      /* AS  */
    ASC_P = 298,                   /* ASC_P  */
    ASOF = 299,                    /* ASOF  */
    ASSERTION = 300,               /* ASSERTION  */
    ASSIGNMENT = 301,              /* ASSIGNMENT  */
    ASYMMETRIC = 302,              /* ASYMMETRIC  */
    AT = 303,                      /* AT  */
    ATTACH = 304,                  /* ATTACH  */
    ATTRIBUTE = 305,               /* ATTRIBUTE  */
    AUTHORIZATION = 306,           /* AUTHORIZATION  */
    BACKWARD = 307,                /* BACKWARD  */
    BEFORE = 308,                  /* BEFORE  */
    BEGIN_P = 309,                 /* BEGIN_P  */
    BETWEEN = 310,                 /* BETWEEN  */
    BIGINT = 311,                  /* BIGINT  */
    BINARY = 312,                  /* BINARY  */
    BIT = 313,                     /* BIT  */
    BOOLEAN_P = 314,               /* BOOLEAN_P  */
    BOTH = 315,                    /* BOTH  */
    BY = 316,                      /* BY  */
    CACHE = 317,                   /* CACHE  */
    CALL_P = 318,                  /* CALL_P  */
    CALLED = 319,                  /* CALLED  */
    CASCADE = 320,                 /* CASCADE  */
    CASCADED = 321,                /* CASCADED  */
    CASE = 322,                    /* CASE  */
    CAST = 323,                    /* CAST  */
    CATALOG_P = 324,               /* CATALOG_P  */
    CENTURIES_P = 325,             /* CENTURIES_P  */
    CENTURY_P = 326,               /* CENTURY_P  */
    CHAIN = 327,                   /* CHAIN  */
    CHAR_P = 328,                  /* CHAR_P  */
    CHARACTER = 329,               /* CHARACTER  */
    CHARACTERISTICS = 330,         /* CHARACTERISTICS  */
    CHECK_P = 331,                 /* CHECK_P  */
    CHECKPOINT = 332,              /* CHECKPOINT  */
    CLASS = 333,                   /* CLASS  */
    CLOSE = 334,                   /* CLOSE  */
    CLUSTER = 335,                 /* CLUSTER  */
    COALESCE = 336,                /* COALESCE  */
    COLLATE = 337,                 /* COLLATE  */
    COLLATION = 338,               /* COLLATION  */
    COLUMN = 339,                  /* COLUMN  */
    COLUMNS = 340,                 /* COLUMNS  */
    COMMENT = 341,                 /* COMMENT  */
    COMMENTS = 342,                /* COMMENTS  */
    COMMIT = 343,                  /* COMMIT  */
    COMMITTED = 344,               /* COMMITTED  */
    COMPRESSION = 345,             /* COMPRESSION  */
    CONCURRENTLY = 346,            /* CONCURRENTLY  */
    CONFIGURATION = 347,           /* CONFIGURATION  */
    CONFLICT = 348,                /* CONFLICT  */
    CONNECTION = 349,              /* CONNECTION  */
    CONSTRAINT = 350,              /* CONSTRAINT  */
    CONSTRAINTS = 351,             /* CONSTRAINTS  */
    CONTENT_P = 352,               /* CONTENT_P  */
    CONTINUE_P = 353,              /* CONTINUE_P  */
    CONVERSION_P = 354,            /* CONVERSION_P  */
    CONVERT = 355,                 /* CONVERT  */
    COPY = 356,                    /* COPY  */
    COST = 357,                    /* COST  */
    CREATE_P = 358,                /* CREATE_P  */
    CROSS = 359,                   /* CROSS  */
    CSV = 360,                     /* CSV  */
    CUBE = 361,                    /* CUBE  */
    CURRENT_P = 362,               /* CURRENT_P  */
    CURSOR = 363,                  /* CURSOR  */
    CYCLE = 364,                   /* CYCLE  */
    DATA_P = 365,                  /* DATA_P  */
    DATABASE = 366,                /* DATABASE  */
    DAY_P = 367,                   /* DAY_P  */
    DAYS_P = 368,                  /* DAYS_P  */
    DEALLOCATE = 369,              /* DEALLOCATE  */
    DEC = 370,                     /* DEC  */
    DECADE_P = 371,                /* DECADE_P  */
    DECADES_P = 372,               /* DECADES_P  */
    DECIMAL_P = 373,               /* DECIMAL_P  */
    DECLARE = 374,                 /* DECLARE  */
    DEFAULT = 375,                 /* DEFAULT  */
    DEFAULTS = 376,                /* DEFAULTS  */
    DEFERRABLE = 377,              /* DEFERRABLE  */
    DEFERRED = 378,                /* DEFERRED  */
    DEFINER = 379,                 /* DEFINER  */
    DELETE_P = 380,                /* DELETE_P  */
    DELIMITER = 381,               /* DELIMITER  */
    DELIMITERS = 382,              /* DELIMITERS  */
    DEPENDS = 383,                 /* DEPENDS  */
    DESC_P = 384,                  /* DESC_P  */
    DESCRIBE = 385,                /* DESCRIBE  */
    DETACH = 386,                  /* DETACH  */
    DICTIONARY = 387,              /* DICTIONARY  */
    DISABLE_P = 388,               /* DISABLE_P  */
    DISCARD = 389,                 /* DISCARD  */
    DISTINCT = 390,                /* DISTINCT  */
    DIV = 391,                     /* DIV  */
    DO = 392,                      /* DO  */
    DOCUMENT_P = 393,              /* DOCUMENT_P  */
    DOMAIN_P = 394,                /* DOMAIN_P  */
    DOUBLE_P = 395,                /* DOUBLE_P  */
    DROP = 396,                    /* DROP  */
    EACH = 397,                    /* EACH  */
    ELSE = 398,                    /* ELSE  */
    ENABLE_P = 399,                /* ENABLE_P  */
    ENCODING = 400,                /* ENCODING  */
    ENCRYPTED = 401,               /* ENCRYPTED  */
    END_P = 402,                   /* END_P  */
    ENUM_P = 403,                  /* ENUM_P  */
    ESCAPE = 404,                  /* ESCAPE  */
    EVENT = 405,                   /* EVENT  */
    EXCEPT = 406,                  /* EXCEPT  */
    EXCLUDE = 407,                 /* EXCLUDE  */
    EXCLUDING = 408,               /* EXCLUDING  */
    EXCLUSIVE = 409,               /* EXCLUSIVE  */
    EXECUTE = 410,                 /* EXECUTE  */
    EXISTS = 411,                  /* EXISTS  */
    EXPLAIN = 412,                 /* EXPLAIN  */
    EXPORT_P = 413,                /* EXPORT_P  */
    EXPORT_STATE = 414,            /* EXPORT_STATE  */
    EXTENSION = 415,               /* EXTENSION  */
    EXTENSIONS = 416,              /* EXTENSIONS  */
    EXTERNAL = 417,                /* EXTERNAL  */
    EXTRACT = 418,                 /* EXTRACT  */
    FALSE_P = 419,                 /* FALSE_P  */
    FAMILY = 420,                  /* FAMILY  */
    FETCH = 421,                   /* FETCH  */
    FILTER = 422,                  /* FILTER  */
    FIRST_P = 423,                 /* FIRST_P  */
    FLOAT_P = 424,                 /* FLOAT_P  */
    FOLLOWING = 425,               /* FOLLOWING  */
    FOR = 426,                     /* FOR  */
    FORCE = 427,                   /* FORCE  */
    FOREIGN = 428,                 /* FOREIGN  */
    FORWARD = 429,                 /* FORWARD  */
    FREEZE = 430,                  /* FREEZE  */
    FROM = 431,                    /* FROM  */
    FULL = 432,                    /* FULL  */
    FUNCTION = 433,                /* FUNCTION  */
    FUNCTIONS = 434,               /* FUNCTIONS  */
    GENERATED = 435,               /* GENERATED  */
    GLOB = 436,                    /* GLOB  */
    GLOBAL = 437,                  /* GLOBAL  */
    GRANT = 438,                   /* GRANT  */
    GRANTED = 439,                 /* GRANTED  */
    GROUP_P = 440,                 /* GROUP_P  */
    GROUPING = 441,                /* GROUPING  */
    GROUPING_ID = 442,             /* GROUPING_ID  */
    GROUPS = 443,                  /* GROUPS  */
    HANDLER = 444,                 /* HANDLER  */
    HAVING = 445,                  /* HAVING  */
    HEADER_P = 446,                /* HEADER_P  */
    HIGH_PRIORITY = 447,           /* HIGH_PRIORITY  */
    HOLD = 448,                    /* HOLD  */
    HOUR_P = 449,                  /* HOUR_P  */
    HOURS_P = 450,                 /* HOURS_P  */
    IDENTITY_P = 451,              /* IDENTITY_P  */
    IF_P = 452,                    /* IF_P  */
    IGNORE_P = 453,                /* IGNORE_P  */
    ILIKE = 454,                   /* ILIKE  */
    IMMEDIATE = 455,               /* IMMEDIATE  */
    IMMUTABLE = 456,               /* IMMUTABLE  */
    IMPLICIT_P = 457,              /* IMPLICIT_P  */
    IMPORT_P = 458,                /* IMPORT_P  */
    IN_P = 459,                    /* IN_P  */
    INCLUDE_P = 460,               /* INCLUDE_P  */
    INCLUDING = 461,               /* INCLUDING  */
    INCREMENT = 462,               /* INCREMENT  */
    INDEX = 463,                   /* INDEX  */
    INDEXES = 464,                 /* INDEXES  */
    INHERIT = 465,                 /* INHERIT  */
    INHERITS = 466,                /* INHERITS  */
    INITIALLY = 467,               /* INITIALLY  */
    INLINE_P = 468,                /* INLINE_P  */
    INNER_P = 469,                 /* INNER_P  */
    INOUT = 470,                   /* INOUT  */
    INPUT_P = 471,                 /* INPUT_P  */
    INSENSITIVE = 472,             /* INSENSITIVE  */
    INSERT = 473,                  /* INSERT  */
    INSTALL = 474,                 /* INSTALL  */
    INSTEAD = 475,                 /* INSTEAD  */
    INT_P = 476,                   /* INT_P  */
    INTEGER = 477,                 /* INTEGER  */
    INTERSECT = 478,               /* INTERSECT  */
    INTERVAL = 479,                /* INTERVAL  */
    INTO = 480,                    /* INTO  */
    INVOKER = 481,                 /* INVOKER  */
    IS = 482,                      /* IS  */
    ISNULL = 483,                  /* ISNULL  */
    ISOLATION = 484,               /* ISOLATION  */
    JOIN = 485,                    /* JOIN  */
    JSON = 486,                    /* JSON  */
    KEY = 487,                     /* KEY  */
    LABEL = 488,                   /* LABEL  */
    LAMBDA = 489,                  /* LAMBDA  */
    LANGUAGE = 490,                /* LANGUAGE  */
    LARGE_P = 491,                 /* LARGE_P  */
    LAST_P = 492,                  /* LAST_P  */
    LATERAL_P = 493,               /* LATERAL_P  */
    LEADING = 494,                 /* LEADING  */
    LEAKPROOF = 495,               /* LEAKPROOF  */
    LEFT = 496,                    /* LEFT  */
    LEVEL = 497,                   /* LEVEL  */
    LIKE = 498,                    /* LIKE  */
    LIMIT = 499,                   /* LIMIT  */
    LISTEN = 500,                  /* LISTEN  */
    LOAD = 501,                    /* LOAD  */
    LOCAL = 502,                   /* LOCAL  */
    LOCATION = 503,                /* LOCATION  */
    LOCK_P = 504,                  /* LOCK_P  */
    LOCKED = 505,                  /* LOCKED  */
    LOGGED = 506,                  /* LOGGED  */
    MACRO = 507,                   /* MACRO  */
    MAP = 508,                     /* MAP  */
    MAPPING = 509,                 /* MAPPING  */
    MATCH = 510,                   /* MATCH  */
    MATERIALIZED = 511,            /* MATERIALIZED  */
    MAXVALUE = 512,                /* MAXVALUE  */
    METHOD = 513,                  /* METHOD  */
    MICROSECOND_P = 514,           /* MICROSECOND_P  */
    MICROSECONDS_P = 515,          /* MICROSECONDS_P  */
    MILLENNIA_P = 516,             /* MILLENNIA_P  */
    MILLENNIUM_P = 517,            /* MILLENNIUM_P  */
    MILLISECOND_P = 518,           /* MILLISECOND_P  */
    MILLISECONDS_P = 519,          /* MILLISECONDS_P  */
    MINUTE_P = 520,                /* MINUTE_P  */
    MINUTES_P = 521,               /* MINUTES_P  */
    MINVALUE = 522,                /* MINVALUE  */
    MOD = 523,                     /* MOD  */
    MODE = 524,                    /* MODE  */
    MONTH_P = 525,                 /* MONTH_P  */
    MONTHS_P = 526,                /* MONTHS_P  */
    MOVE = 527,                    /* MOVE  */
    NAME_P = 528,                  /* NAME_P  */
    NAMES = 529,                   /* NAMES  */
    NATIONAL = 530,                /* NATIONAL  */
    NATURAL = 531,                 /* NATURAL  */
    NCHAR = 532,                   /* NCHAR  */
    NEW = 533,                     /* NEW  */
    NEXT = 534,                    /* NEXT  */
    NO = 535,                      /* NO  */
    NONE = 536,                    /* NONE  */
    NOT = 537,                     /* NOT  */
    NOTHING = 538,                 /* NOTHING  */
    NOTIFY = 539,                  /* NOTIFY  */
    NOTNULL = 540,                 /* NOTNULL  */
    NOWAIT = 541,                  /* NOWAIT  */
    NULL_P = 542,                  /* NULL_P  */
    NULLIF = 543,                  /* NULLIF  */
    NULLS_P = 544,                 /* NULLS_P  */
    NUMERIC = 545,                 /* NUMERIC  */
    OBJECT_P = 546,                /* OBJECT_P  */
    OF = 547,                      /* OF  */
    OFF = 548,                     /* OFF  */
    OFFSET = 549,                  /* OFFSET  */
    OIDS = 550,                    /* OIDS  */
    OLD = 551,                     /* OLD  */
    ON = 552,                      /* ON  */
    ONLY = 553,                    /* ONLY  */
    OPERATOR = 554,                /* OPERATOR  */
    OPTION = 555,                  /* OPTION  */
    OPTIONS = 556,                 /* OPTIONS  */
    OR = 557,                      /* OR  */
    ORDER = 558,                   /* ORDER  */
    ORDINALITY = 559,              /* ORDINALITY  */
    OTHERS = 560,                  /* OTHERS  */
    OUT_P = 561,                   /* OUT_P  */
    OUTER_P = 562,                 /* OUTER_P  */
    OVER = 563,                    /* OVER  */
    OVERLAPS = 564,                /* OVERLAPS  */
    OVERLAY = 565,                 /* OVERLAY  */
    OVERRIDING = 566,              /* OVERRIDING  */
    OWNED = 567,                   /* OWNED  */
    OWNER = 568,                   /* OWNER  */
    PARALLEL = 569,                /* PARALLEL  */
    PARSER = 570,                  /* PARSER  */
    PARTIAL = 571,                 /* PARTIAL  */
    PARTITION = 572,               /* PARTITION  */
    PARTITIONED = 573,             /* PARTITIONED  */
    PASSING = 574,                 /* PASSING  */
    PASSWORD = 575,                /* PASSWORD  */
    PERCENT = 576,                 /* PERCENT  */
    PERSISTENT = 577,              /* PERSISTENT  */
    PIVOT = 578,                   /* PIVOT  */
    PIVOT_LONGER = 579,            /* PIVOT_LONGER  */
    PIVOT_WIDER = 580,             /* PIVOT_WIDER  */
    PLACING = 581,                 /* PLACING  */
    PLANS = 582,                   /* PLANS  */
    POLICY = 583,                  /* POLICY  */
    POSITION = 584,                /* POSITION  */
    POSITIONAL = 585,              /* POSITIONAL  */
    PRAGMA_P = 586,                /* PRAGMA_P  */
    PRECEDING = 587,               /* PRECEDING  */
    PRECISION = 588,               /* PRECISION  */
    PREPARE = 589,                 /* PREPARE  */
    PREPARED = 590,                /* PREPARED  */
    PRESERVE = 591,                /* PRESERVE  */
    PRIMARY = 592,                 /* PRIMARY  */
    PRIOR = 593,                   /* PRIOR  */
    PRIVILEGES = 594,              /* PRIVILEGES  */
    PROCEDURAL = 595,              /* PROCEDURAL  */
    PROCEDURE = 596,               /* PROCEDURE  */
    PROGRAM = 597,                 /* PROGRAM  */
    PUBLICATION = 598,             /* PUBLICATION  */
    QUALIFY = 599,                 /* QUALIFY  */
    QUARTER_P = 600,               /* QUARTER_P  */
    QUARTERS_P = 601,              /* QUARTERS_P  */
    QUOTE = 602,                   /* QUOTE  */
    RANGE = 603,                   /* RANGE  */
    READ_P = 604,                  /* READ_P  */
    REAL = 605,                    /* REAL  */
    REASSIGN = 606,                /* REASSIGN  */
    RECHECK = 607,                 /* RECHECK  */
    RECURSIVE = 608,               /* RECURSIVE  */
    REF = 609,                     /* REF  */
    REFERENCES = 610,              /* REFERENCES  */
    REFERENCING = 611,             /* REFERENCING  */
    REFRESH = 612,                 /* REFRESH  */
    REINDEX = 613,                 /* REINDEX  */
    RELATIVE_P = 614,              /* RELATIVE_P  */
    RELEASE = 615,                 /* RELEASE  */
    RENAME = 616,                  /* RENAME  */
    REPEATABLE = 617,              /* REPEATABLE  */
    REPLACE = 618,                 /* REPLACE  */
    REPLICA = 619,                 /* REPLICA  */
    RESET = 620,                   /* RESET  */
    RESPECT_P = 621,               /* RESPECT_P  */
    RESTART = 622,                 /* RESTART  */
    RESTRICT = 623,                /* RESTRICT  */
    RETURNING = 624,               /* RETURNING  */
    RETURNS = 625,                 /* RETURNS  */
    REVOKE = 626,                  /* REVOKE  */
    RIGHT = 627,                   /* RIGHT  */
    ROLE = 628,                    /* ROLE  */
    ROLLBACK = 629,                /* ROLLBACK  */
    ROLLUP = 630,                  /* ROLLUP  */
    ROW = 631,                     /* ROW  */
    ROWS = 632,                    /* ROWS  */
    RULE = 633,                    /* RULE  */
    SAMPLE = 634,                  /* SAMPLE  */
    SAVEPOINT = 635,               /* SAVEPOINT  */
    SCHEMA = 636,                  /* SCHEMA  */
    SCHEMAS = 637,                 /* SCHEMAS  */
    SCOPE = 638,                   /* SCOPE  */
    SCROLL = 639,                  /* SCROLL  */
    SEARCH = 640,                  /* SEARCH  */
    SECOND_P = 641,                /* SECOND_P  */
    SECONDS_P = 642,               /* SECONDS_P  */
    SECRET = 643,                  /* SECRET  */
    SECURITY = 644,                /* SECURITY  */
    SELECT = 645,                  /* SELECT  */
    SEMI = 646,                    /* SEMI  */
    SEQUENCE = 647,                /* SEQUENCE  */
    SEQUENCES = 648,               /* SEQUENCES  */
    SERIALIZABLE = 649,            /* SERIALIZABLE  */
    SERVER = 650,                  /* SERVER  */
    SESSION = 651,                 /* SESSION  */
    SET = 652,                     /* SET  */
    SETOF = 653,                   /* SETOF  */
    SETS = 654,                    /* SETS  */
    SHARE = 655,                   /* SHARE  */
    SHOW = 656,                    /* SHOW  */
    SIMILAR = 657,                 /* SIMILAR  */
    SIMPLE = 658,                  /* SIMPLE  */
    SKIP = 659,                    /* SKIP  */
    SMALLINT = 660,                /* SMALLINT  */
    SNAPSHOT = 661,                /* SNAPSHOT  */
    SOME = 662,                    /* SOME  */
    SORTED = 663,                  /* SORTED  */
    SQL_P = 664,                   /* SQL_P  */
    SQL_BIG_RESULT = 665,          /* SQL_BIG_RESULT  */
    SQL_BUFFER_RESULT = 666,       /* SQL_BUFFER_RESULT  */
    SQL_CALC_FOUND_ROWS = 667,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE_SYM = 668,        /* SQL_NO_CACHE_SYM  */
    SQL_SMALL_RESULT = 669,        /* SQL_SMALL_RESULT  */
    STABLE = 670,                  /* STABLE  */
    STANDALONE_P = 671,            /* STANDALONE_P  */
    START = 672,                   /* START  */
    STATEMENT = 673,               /* STATEMENT  */
    STATISTICS = 674,              /* STATISTICS  */
    STDIN = 675,                   /* STDIN  */
    STDOUT = 676,                  /* STDOUT  */
    STORAGE = 677,                 /* STORAGE  */
    STORED = 678,                  /* STORED  */
    STRAIGHT_JOIN = 679,           /* STRAIGHT_JOIN  */
    STRICT_P = 680,                /* STRICT_P  */
    STRIP_P = 681,                 /* STRIP_P  */
    STRUCT = 682,                  /* STRUCT  */
    SUBSCRIPTION = 683,            /* SUBSCRIPTION  */
    SUBSTRING = 684,               /* SUBSTRING  */
    SUMMARIZE = 685,               /* SUMMARIZE  */
    SYMMETRIC = 686,               /* SYMMETRIC  */
    SYSID = 687,                   /* SYSID  */
    SYSTEM_P = 688,                /* SYSTEM_P  */
    TABLE = 689,                   /* TABLE  */
    TABLES = 690,                  /* TABLES  */
    TABLESAMPLE = 691,             /* TABLESAMPLE  */
    TABLESPACE = 692,              /* TABLESPACE  */
    TEMP = 693,                    /* TEMP  */
    TEMPLATE = 694,                /* TEMPLATE  */
    TEMPORARY = 695,               /* TEMPORARY  */
    TEXT_P = 696,                  /* TEXT_P  */
    THEN = 697,                    /* THEN  */
    TIES = 698,                    /* TIES  */
    TIME = 699,                    /* TIME  */
    TIMESTAMP = 700,               /* TIMESTAMP  */
    TIMESTAMPADD = 701,            /* TIMESTAMPADD  */
    TIMESTAMPDIFF = 702,           /* TIMESTAMPDIFF  */
    TO = 703,                      /* TO  */
    TRAILING = 704,                /* TRAILING  */
    TRANSACTION = 705,             /* TRANSACTION  */
    TRANSFORM = 706,               /* TRANSFORM  */
    TREAT = 707,                   /* TREAT  */
    TRIGGER = 708,                 /* TRIGGER  */
    TRIM = 709,                    /* TRIM  */
    TRUE_P = 710,                  /* TRUE_P  */
    TRUNCATE = 711,                /* TRUNCATE  */
    TRUSTED = 712,                 /* TRUSTED  */
    TRY_CAST = 713,                /* TRY_CAST  */
    TYPE_P = 714,                  /* TYPE_P  */
    TYPES_P = 715,                 /* TYPES_P  */
    UNBOUNDED = 716,               /* UNBOUNDED  */
    UNCOMMITTED = 717,             /* UNCOMMITTED  */
    UNENCRYPTED = 718,             /* UNENCRYPTED  */
    UNION = 719,                   /* UNION  */
    UNIQUE = 720,                  /* UNIQUE  */
    UNKNOWN = 721,                 /* UNKNOWN  */
    UNLISTEN = 722,                /* UNLISTEN  */
    UNLOGGED = 723,                /* UNLOGGED  */
    UNPACK = 724,                  /* UNPACK  */
    UNPIVOT = 725,                 /* UNPIVOT  */
    UNTIL = 726,                   /* UNTIL  */
    UPDATE = 727,                  /* UPDATE  */
    USE_P = 728,                   /* USE_P  */
    USER = 729,                    /* USER  */
    USING = 730,                   /* USING  */
    VACUUM = 731,                  /* VACUUM  */
    VALID = 732,                   /* VALID  */
    VALIDATE = 733,                /* VALIDATE  */
    VALIDATOR = 734,               /* VALIDATOR  */
    VALUE_P = 735,                 /* VALUE_P  */
    VALUES = 736,                  /* VALUES  */
    VARCHAR = 737,                 /* VARCHAR  */
    VARIABLE_P = 738,              /* VARIABLE_P  */
    VARIADIC = 739,                /* VARIADIC  */
    VARYING = 740,                 /* VARYING  */
    VERBOSE = 741,                 /* VERBOSE  */
    VERSION_P = 742,               /* VERSION_P  */
    VIEW = 743,                    /* VIEW  */
    VIEWS = 744,                   /* VIEWS  */
    VIRTUAL = 745,                 /* VIRTUAL  */
    VOLATILE = 746,                /* VOLATILE  */
    WEEK_P = 747,                  /* WEEK_P  */
    WEEKS_P = 748,                 /* WEEKS_P  */
    WHEN = 749,                    /* WHEN  */
    WHERE = 750,                   /* WHERE  */
    WHITESPACE_P = 751,            /* WHITESPACE_P  */
    WINDOW = 752,                  /* WINDOW  */
    WITH = 753,                    /* WITH  */
    WITHIN = 754,                  /* WITHIN  */
    WITHOUT = 755,                 /* WITHOUT  */
    WORK = 756,                    /* WORK  */
    WRAPPER = 757,                 /* WRAPPER  */
    WRITE_P = 758,                 /* WRITE_P  */
    XML_P = 759,                   /* XML_P  */
    XMLATTRIBUTES = 760,           /* XMLATTRIBUTES  */
    XMLCONCAT = 761,               /* XMLCONCAT  */
    XMLELEMENT = 762,              /* XMLELEMENT  */
    XMLEXISTS = 763,               /* XMLEXISTS  */
    XMLFOREST = 764,               /* XMLFOREST  */
    XMLNAMESPACES = 765,           /* XMLNAMESPACES  */
    XMLPARSE = 766,                /* XMLPARSE  */
    XMLPI = 767,                   /* XMLPI  */
    XMLROOT = 768,                 /* XMLROOT  */
    XMLSERIALIZE = 769,            /* XMLSERIALIZE  */
    XMLTABLE = 770,                /* XMLTABLE  */
    YEAR_P = 771,                  /* YEAR_P  */
    YEARS_P = 772,                 /* YEARS_P  */
    YES_P = 773,                   /* YES_P  */
    ZONE = 774,                    /* ZONE  */
    NOT_LA = 775,                  /* NOT_LA  */
    NULLS_LA = 776,                /* NULLS_LA  */
    WITH_LA = 777,                 /* WITH_LA  */
    SINGLE_COLON = 778,            /* SINGLE_COLON  */
    CONDITIONLESS_JOIN = 779,      /* CONDITIONLESS_JOIN  */
    POSTFIXOP = 780,               /* POSTFIXOP  */
    UMINUS = 781                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "third_party/libpg_query/grammar/grammar.y"

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;
	const char          *conststr;

	char				chr;
	bool				boolean;
	PGJoinType			jtype;
	PGDropBehavior		dbehavior;
	PGOnCommitAction		oncommit;
	PGOnCreateConflict		oncreateconflict;
	PGList				*list;
	PGNode				*node;
	PGValue				*value;
	PGObjectType			objtype;
	PGTypeName			*typnam;
	PGObjectWithArgs		*objwithargs;
	PGDefElem				*defelt;
	PGSortBy				*sortby;
	PGWindowDef			*windef;
	PGJoinExpr			*jexpr;
	PGIndexElem			*ielem;
	PGAlias				*alias;
	PGRangeVar			*range;
	PGIntoClause			*into;
	PGCTEMaterialize			ctematerialize;
	PGWithClause			*with;
	PGInferClause			*infer;
	PGOnConflictClause	*onconflict;
	PGOnConflictActionAlias onconflictshorthand;
	PGAIndices			*aind;
	PGResTarget			*target;
	PGInsertStmt			*istmt;
	PGVariableSetStmt		*vsetstmt;
	PGOverridingKind       override;
	PGSortByDir            sortorder;
	PGSortByNulls          nullorder;
	PGIgnoreNulls          ignorenulls;
	PGConstrType           constr;
	PGLockClauseStrength lockstrength;
	PGLockWaitPolicy lockwaitpolicy;
	PGSubLinkType subquerytype;
	PGViewCheckOption viewcheckoption;
	PGInsertColumnOrder bynameorposition;
	PGLoadInstallType loadinstalltype;
	PGTransactionStmtType transactiontype;

#line 641 "third_party/libpg_query/grammar/grammar_out.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int base_yyparse (core_yyscan_t yyscanner);


#endif /* !YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED  */
