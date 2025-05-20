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
    NOT_DISTINCT_FROM = 279,       /* NOT_DISTINCT_FROM  */
    ABORT_P = 280,                 /* ABORT_P  */
    ABSOLUTE_P = 281,              /* ABSOLUTE_P  */
    ACCESS = 282,                  /* ACCESS  */
    ACTION = 283,                  /* ACTION  */
    ADD_P = 284,                   /* ADD_P  */
    ADMIN = 285,                   /* ADMIN  */
    AFTER = 286,                   /* AFTER  */
    AGGREGATE = 287,               /* AGGREGATE  */
    ALL = 288,                     /* ALL  */
    ALSO = 289,                    /* ALSO  */
    ALTER = 290,                   /* ALTER  */
    ALWAYS = 291,                  /* ALWAYS  */
    ANALYSE = 292,                 /* ANALYSE  */
    ANALYZE = 293,                 /* ANALYZE  */
    AND = 294,                     /* AND  */
    ANTI = 295,                    /* ANTI  */
    ANY = 296,                     /* ANY  */
    ARRAY = 297,                   /* ARRAY  */
    AS = 298,                      /* AS  */
    ASC_P = 299,                   /* ASC_P  */
    ASOF = 300,                    /* ASOF  */
    ASSERTION = 301,               /* ASSERTION  */
    ASSIGNMENT = 302,              /* ASSIGNMENT  */
    ASYMMETRIC = 303,              /* ASYMMETRIC  */
    AT = 304,                      /* AT  */
    ATTACH = 305,                  /* ATTACH  */
    ATTRIBUTE = 306,               /* ATTRIBUTE  */
    AUTHORIZATION = 307,           /* AUTHORIZATION  */
    BACKWARD = 308,                /* BACKWARD  */
    BEFORE = 309,                  /* BEFORE  */
    BEGIN_P = 310,                 /* BEGIN_P  */
    BETWEEN = 311,                 /* BETWEEN  */
    BIGINT = 312,                  /* BIGINT  */
    BINARY = 313,                  /* BINARY  */
    BIT = 314,                     /* BIT  */
    BOOLEAN_P = 315,               /* BOOLEAN_P  */
    BOTH = 316,                    /* BOTH  */
    BY = 317,                      /* BY  */
    CACHE = 318,                   /* CACHE  */
    CALL_P = 319,                  /* CALL_P  */
    CALLED = 320,                  /* CALLED  */
    CASCADE = 321,                 /* CASCADE  */
    CASCADED = 322,                /* CASCADED  */
    CASE = 323,                    /* CASE  */
    CAST = 324,                    /* CAST  */
    CATALOG_P = 325,               /* CATALOG_P  */
    CENTURIES_P = 326,             /* CENTURIES_P  */
    CENTURY_P = 327,               /* CENTURY_P  */
    CHAIN = 328,                   /* CHAIN  */
    CHAR_P = 329,                  /* CHAR_P  */
    CHARACTER = 330,               /* CHARACTER  */
    CHARACTERISTICS = 331,         /* CHARACTERISTICS  */
    CHECK_P = 332,                 /* CHECK_P  */
    CHECKPOINT = 333,              /* CHECKPOINT  */
    CLASS = 334,                   /* CLASS  */
    CLOSE = 335,                   /* CLOSE  */
    CLUSTER = 336,                 /* CLUSTER  */
    COALESCE = 337,                /* COALESCE  */
    COLLATE = 338,                 /* COLLATE  */
    COLLATION = 339,               /* COLLATION  */
    COLUMN = 340,                  /* COLUMN  */
    COLUMNS = 341,                 /* COLUMNS  */
    COMMENT = 342,                 /* COMMENT  */
    COMMENTS = 343,                /* COMMENTS  */
    COMMIT = 344,                  /* COMMIT  */
    COMMITTED = 345,               /* COMMITTED  */
    COMPRESSION = 346,             /* COMPRESSION  */
    CONCURRENTLY = 347,            /* CONCURRENTLY  */
    CONFIGURATION = 348,           /* CONFIGURATION  */
    CONFLICT = 349,                /* CONFLICT  */
    CONNECTION = 350,              /* CONNECTION  */
    CONSTRAINT = 351,              /* CONSTRAINT  */
    CONSTRAINTS = 352,             /* CONSTRAINTS  */
    CONTENT_P = 353,               /* CONTENT_P  */
    CONTINUE_P = 354,              /* CONTINUE_P  */
    CONVERSION_P = 355,            /* CONVERSION_P  */
    CONVERT = 356,                 /* CONVERT  */
    COPY = 357,                    /* COPY  */
    COST = 358,                    /* COST  */
    CREATE_P = 359,                /* CREATE_P  */
    CROSS = 360,                   /* CROSS  */
    CSV = 361,                     /* CSV  */
    CUBE = 362,                    /* CUBE  */
    CURRENT_P = 363,               /* CURRENT_P  */
    CURSOR = 364,                  /* CURSOR  */
    CYCLE = 365,                   /* CYCLE  */
    DATA_P = 366,                  /* DATA_P  */
    DATABASE = 367,                /* DATABASE  */
    DAY_P = 368,                   /* DAY_P  */
    DAYS_P = 369,                  /* DAYS_P  */
    DEALLOCATE = 370,              /* DEALLOCATE  */
    DEC = 371,                     /* DEC  */
    DECADE_P = 372,                /* DECADE_P  */
    DECADES_P = 373,               /* DECADES_P  */
    DECIMAL_P = 374,               /* DECIMAL_P  */
    DECLARE = 375,                 /* DECLARE  */
    DEFAULT = 376,                 /* DEFAULT  */
    DEFAULTS = 377,                /* DEFAULTS  */
    DEFERRABLE = 378,              /* DEFERRABLE  */
    DEFERRED = 379,                /* DEFERRED  */
    DEFINER = 380,                 /* DEFINER  */
    DELETE_P = 381,                /* DELETE_P  */
    DELIMITER = 382,               /* DELIMITER  */
    DELIMITERS = 383,              /* DELIMITERS  */
    DEPENDS = 384,                 /* DEPENDS  */
    DESC_P = 385,                  /* DESC_P  */
    DESCRIBE = 386,                /* DESCRIBE  */
    DETACH = 387,                  /* DETACH  */
    DICTIONARY = 388,              /* DICTIONARY  */
    DISABLE_P = 389,               /* DISABLE_P  */
    DISCARD = 390,                 /* DISCARD  */
    DISTINCT = 391,                /* DISTINCT  */
    DIV = 392,                     /* DIV  */
    DO = 393,                      /* DO  */
    DOCUMENT_P = 394,              /* DOCUMENT_P  */
    DOMAIN_P = 395,                /* DOMAIN_P  */
    DOUBLE_P = 396,                /* DOUBLE_P  */
    DROP = 397,                    /* DROP  */
    EACH = 398,                    /* EACH  */
    ELSE = 399,                    /* ELSE  */
    ENABLE_P = 400,                /* ENABLE_P  */
    ENCODING = 401,                /* ENCODING  */
    ENCRYPTED = 402,               /* ENCRYPTED  */
    END_P = 403,                   /* END_P  */
    ENUM_P = 404,                  /* ENUM_P  */
    ESCAPE = 405,                  /* ESCAPE  */
    EVENT = 406,                   /* EVENT  */
    EXCEPT = 407,                  /* EXCEPT  */
    EXCLUDE = 408,                 /* EXCLUDE  */
    EXCLUDING = 409,               /* EXCLUDING  */
    EXCLUSIVE = 410,               /* EXCLUSIVE  */
    EXECUTE = 411,                 /* EXECUTE  */
    EXISTS = 412,                  /* EXISTS  */
    EXPLAIN = 413,                 /* EXPLAIN  */
    EXPORT_P = 414,                /* EXPORT_P  */
    EXPORT_STATE = 415,            /* EXPORT_STATE  */
    EXTENSION = 416,               /* EXTENSION  */
    EXTENSIONS = 417,              /* EXTENSIONS  */
    EXTERNAL = 418,                /* EXTERNAL  */
    EXTRACT = 419,                 /* EXTRACT  */
    FALSE_P = 420,                 /* FALSE_P  */
    FAMILY = 421,                  /* FAMILY  */
    FETCH = 422,                   /* FETCH  */
    FILTER = 423,                  /* FILTER  */
    FIRST_P = 424,                 /* FIRST_P  */
    FLOAT_P = 425,                 /* FLOAT_P  */
    FOLLOWING = 426,               /* FOLLOWING  */
    FOR = 427,                     /* FOR  */
    FORCE = 428,                   /* FORCE  */
    FOREIGN = 429,                 /* FOREIGN  */
    FORWARD = 430,                 /* FORWARD  */
    FREEZE = 431,                  /* FREEZE  */
    FROM = 432,                    /* FROM  */
    FULL = 433,                    /* FULL  */
    FUNCTION = 434,                /* FUNCTION  */
    FUNCTIONS = 435,               /* FUNCTIONS  */
    GENERATED = 436,               /* GENERATED  */
    GLOB = 437,                    /* GLOB  */
    GLOBAL = 438,                  /* GLOBAL  */
    GRANT = 439,                   /* GRANT  */
    GRANTED = 440,                 /* GRANTED  */
    GROUP_P = 441,                 /* GROUP_P  */
    GROUPING = 442,                /* GROUPING  */
    GROUPING_ID = 443,             /* GROUPING_ID  */
    GROUPS = 444,                  /* GROUPS  */
    HANDLER = 445,                 /* HANDLER  */
    HAVING = 446,                  /* HAVING  */
    HEADER_P = 447,                /* HEADER_P  */
    HIGH_PRIORITY = 448,           /* HIGH_PRIORITY  */
    HOLD = 449,                    /* HOLD  */
    HOUR_P = 450,                  /* HOUR_P  */
    HOURS_P = 451,                 /* HOURS_P  */
    IDENTITY_P = 452,              /* IDENTITY_P  */
    IF_P = 453,                    /* IF_P  */
    IGNORE_P = 454,                /* IGNORE_P  */
    ILIKE = 455,                   /* ILIKE  */
    IMMEDIATE = 456,               /* IMMEDIATE  */
    IMMUTABLE = 457,               /* IMMUTABLE  */
    IMPLICIT_P = 458,              /* IMPLICIT_P  */
    IMPORT_P = 459,                /* IMPORT_P  */
    IN_P = 460,                    /* IN_P  */
    INCLUDE_P = 461,               /* INCLUDE_P  */
    INCLUDING = 462,               /* INCLUDING  */
    INCREMENT = 463,               /* INCREMENT  */
    INDEX = 464,                   /* INDEX  */
    INDEXES = 465,                 /* INDEXES  */
    INHERIT = 466,                 /* INHERIT  */
    INHERITS = 467,                /* INHERITS  */
    INITIALLY = 468,               /* INITIALLY  */
    INLINE_P = 469,                /* INLINE_P  */
    INNER_P = 470,                 /* INNER_P  */
    INOUT = 471,                   /* INOUT  */
    INPUT_P = 472,                 /* INPUT_P  */
    INSENSITIVE = 473,             /* INSENSITIVE  */
    INSERT = 474,                  /* INSERT  */
    INSTALL = 475,                 /* INSTALL  */
    INSTEAD = 476,                 /* INSTEAD  */
    INT_P = 477,                   /* INT_P  */
    INTEGER = 478,                 /* INTEGER  */
    INTERSECT = 479,               /* INTERSECT  */
    INTERVAL = 480,                /* INTERVAL  */
    INTO = 481,                    /* INTO  */
    INVOKER = 482,                 /* INVOKER  */
    IS = 483,                      /* IS  */
    ISNULL = 484,                  /* ISNULL  */
    ISOLATION = 485,               /* ISOLATION  */
    JOIN = 486,                    /* JOIN  */
    JSON = 487,                    /* JSON  */
    KEY = 488,                     /* KEY  */
    LABEL = 489,                   /* LABEL  */
    LAMBDA = 490,                  /* LAMBDA  */
    LANGUAGE = 491,                /* LANGUAGE  */
    LARGE_P = 492,                 /* LARGE_P  */
    LAST_P = 493,                  /* LAST_P  */
    LATERAL_P = 494,               /* LATERAL_P  */
    LEADING = 495,                 /* LEADING  */
    LEAKPROOF = 496,               /* LEAKPROOF  */
    LEFT = 497,                    /* LEFT  */
    LEVEL = 498,                   /* LEVEL  */
    LIKE = 499,                    /* LIKE  */
    LIMIT = 500,                   /* LIMIT  */
    LISTEN = 501,                  /* LISTEN  */
    LOAD = 502,                    /* LOAD  */
    LOCAL = 503,                   /* LOCAL  */
    LOCATION = 504,                /* LOCATION  */
    LOCK_P = 505,                  /* LOCK_P  */
    LOCKED = 506,                  /* LOCKED  */
    LOGGED = 507,                  /* LOGGED  */
    MACRO = 508,                   /* MACRO  */
    MAP = 509,                     /* MAP  */
    MAPPING = 510,                 /* MAPPING  */
    MATCH = 511,                   /* MATCH  */
    MATERIALIZED = 512,            /* MATERIALIZED  */
    MAXVALUE = 513,                /* MAXVALUE  */
    METHOD = 514,                  /* METHOD  */
    MICROSECOND_P = 515,           /* MICROSECOND_P  */
    MICROSECONDS_P = 516,          /* MICROSECONDS_P  */
    MILLENNIA_P = 517,             /* MILLENNIA_P  */
    MILLENNIUM_P = 518,            /* MILLENNIUM_P  */
    MILLISECOND_P = 519,           /* MILLISECOND_P  */
    MILLISECONDS_P = 520,          /* MILLISECONDS_P  */
    MINUTE_P = 521,                /* MINUTE_P  */
    MINUTES_P = 522,               /* MINUTES_P  */
    MINVALUE = 523,                /* MINVALUE  */
    MOD = 524,                     /* MOD  */
    MODE = 525,                    /* MODE  */
    MONTH_P = 526,                 /* MONTH_P  */
    MONTHS_P = 527,                /* MONTHS_P  */
    MOVE = 528,                    /* MOVE  */
    NAME_P = 529,                  /* NAME_P  */
    NAMES = 530,                   /* NAMES  */
    NATIONAL = 531,                /* NATIONAL  */
    NATURAL = 532,                 /* NATURAL  */
    NCHAR = 533,                   /* NCHAR  */
    NEW = 534,                     /* NEW  */
    NEXT = 535,                    /* NEXT  */
    NO = 536,                      /* NO  */
    NONE = 537,                    /* NONE  */
    NOT = 538,                     /* NOT  */
    NOTHING = 539,                 /* NOTHING  */
    NOTIFY = 540,                  /* NOTIFY  */
    NOTNULL = 541,                 /* NOTNULL  */
    NOWAIT = 542,                  /* NOWAIT  */
    NULL_P = 543,                  /* NULL_P  */
    NULLIF = 544,                  /* NULLIF  */
    NULLS_P = 545,                 /* NULLS_P  */
    NUMERIC = 546,                 /* NUMERIC  */
    OBJECT_P = 547,                /* OBJECT_P  */
    OF = 548,                      /* OF  */
    OFF = 549,                     /* OFF  */
    OFFSET = 550,                  /* OFFSET  */
    OIDS = 551,                    /* OIDS  */
    OLD = 552,                     /* OLD  */
    ON = 553,                      /* ON  */
    ONLY = 554,                    /* ONLY  */
    OPERATOR = 555,                /* OPERATOR  */
    OPTION = 556,                  /* OPTION  */
    OPTIONS = 557,                 /* OPTIONS  */
    OR = 558,                      /* OR  */
    ORDER = 559,                   /* ORDER  */
    ORDINALITY = 560,              /* ORDINALITY  */
    OTHERS = 561,                  /* OTHERS  */
    OUT_P = 562,                   /* OUT_P  */
    OUTER_P = 563,                 /* OUTER_P  */
    OVER = 564,                    /* OVER  */
    OVERLAPS = 565,                /* OVERLAPS  */
    OVERLAY = 566,                 /* OVERLAY  */
    OVERRIDING = 567,              /* OVERRIDING  */
    OWNED = 568,                   /* OWNED  */
    OWNER = 569,                   /* OWNER  */
    PARALLEL = 570,                /* PARALLEL  */
    PARSER = 571,                  /* PARSER  */
    PARTIAL = 572,                 /* PARTIAL  */
    PARTITION = 573,               /* PARTITION  */
    PARTITIONED = 574,             /* PARTITIONED  */
    PASSING = 575,                 /* PASSING  */
    PASSWORD = 576,                /* PASSWORD  */
    PERCENT = 577,                 /* PERCENT  */
    PERSISTENT = 578,              /* PERSISTENT  */
    PIVOT = 579,                   /* PIVOT  */
    PIVOT_LONGER = 580,            /* PIVOT_LONGER  */
    PIVOT_WIDER = 581,             /* PIVOT_WIDER  */
    PLACING = 582,                 /* PLACING  */
    PLANS = 583,                   /* PLANS  */
    POLICY = 584,                  /* POLICY  */
    POSITION = 585,                /* POSITION  */
    POSITIONAL = 586,              /* POSITIONAL  */
    PRAGMA_P = 587,                /* PRAGMA_P  */
    PRECEDING = 588,               /* PRECEDING  */
    PRECISION = 589,               /* PRECISION  */
    PREPARE = 590,                 /* PREPARE  */
    PREPARED = 591,                /* PREPARED  */
    PRESERVE = 592,                /* PRESERVE  */
    PRIMARY = 593,                 /* PRIMARY  */
    PRIOR = 594,                   /* PRIOR  */
    PRIVILEGES = 595,              /* PRIVILEGES  */
    PROCEDURAL = 596,              /* PROCEDURAL  */
    PROCEDURE = 597,               /* PROCEDURE  */
    PROGRAM = 598,                 /* PROGRAM  */
    PUBLICATION = 599,             /* PUBLICATION  */
    QUALIFY = 600,                 /* QUALIFY  */
    QUARTER_P = 601,               /* QUARTER_P  */
    QUARTERS_P = 602,              /* QUARTERS_P  */
    QUOTE = 603,                   /* QUOTE  */
    RANGE = 604,                   /* RANGE  */
    READ_P = 605,                  /* READ_P  */
    REAL = 606,                    /* REAL  */
    REASSIGN = 607,                /* REASSIGN  */
    RECHECK = 608,                 /* RECHECK  */
    RECURSIVE = 609,               /* RECURSIVE  */
    REF = 610,                     /* REF  */
    REFERENCES = 611,              /* REFERENCES  */
    REFERENCING = 612,             /* REFERENCING  */
    REFRESH = 613,                 /* REFRESH  */
    REINDEX = 614,                 /* REINDEX  */
    RELATIVE_P = 615,              /* RELATIVE_P  */
    RELEASE = 616,                 /* RELEASE  */
    RENAME = 617,                  /* RENAME  */
    REPEATABLE = 618,              /* REPEATABLE  */
    REPLACE = 619,                 /* REPLACE  */
    REPLICA = 620,                 /* REPLICA  */
    RESET = 621,                   /* RESET  */
    RESPECT_P = 622,               /* RESPECT_P  */
    RESTART = 623,                 /* RESTART  */
    RESTRICT = 624,                /* RESTRICT  */
    RETURNING = 625,               /* RETURNING  */
    RETURNS = 626,                 /* RETURNS  */
    REVOKE = 627,                  /* REVOKE  */
    RIGHT = 628,                   /* RIGHT  */
    ROLE = 629,                    /* ROLE  */
    ROLLBACK = 630,                /* ROLLBACK  */
    ROLLUP = 631,                  /* ROLLUP  */
    ROW = 632,                     /* ROW  */
    ROWS = 633,                    /* ROWS  */
    RULE = 634,                    /* RULE  */
    SAMPLE = 635,                  /* SAMPLE  */
    SAVEPOINT = 636,               /* SAVEPOINT  */
    SCHEMA = 637,                  /* SCHEMA  */
    SCHEMAS = 638,                 /* SCHEMAS  */
    SCOPE = 639,                   /* SCOPE  */
    SCROLL = 640,                  /* SCROLL  */
    SEARCH = 641,                  /* SEARCH  */
    SECOND_P = 642,                /* SECOND_P  */
    SECONDS_P = 643,               /* SECONDS_P  */
    SECRET = 644,                  /* SECRET  */
    SECURITY = 645,                /* SECURITY  */
    SELECT = 646,                  /* SELECT  */
    SEMI = 647,                    /* SEMI  */
    SEQUENCE = 648,                /* SEQUENCE  */
    SEQUENCES = 649,               /* SEQUENCES  */
    SERIALIZABLE = 650,            /* SERIALIZABLE  */
    SERVER = 651,                  /* SERVER  */
    SESSION = 652,                 /* SESSION  */
    SET = 653,                     /* SET  */
    SETOF = 654,                   /* SETOF  */
    SETS = 655,                    /* SETS  */
    SHARE = 656,                   /* SHARE  */
    SHOW = 657,                    /* SHOW  */
    SIMILAR = 658,                 /* SIMILAR  */
    SIMPLE = 659,                  /* SIMPLE  */
    SKIP = 660,                    /* SKIP  */
    SMALLINT = 661,                /* SMALLINT  */
    SNAPSHOT = 662,                /* SNAPSHOT  */
    SOME = 663,                    /* SOME  */
    SORTED = 664,                  /* SORTED  */
    SQL_P = 665,                   /* SQL_P  */
    SQL_BIG_RESULT = 666,          /* SQL_BIG_RESULT  */
    SQL_BUFFER_RESULT = 667,       /* SQL_BUFFER_RESULT  */
    SQL_CALC_FOUND_ROWS = 668,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE = 669,            /* SQL_NO_CACHE  */
    SQL_SMALL_RESULT = 670,        /* SQL_SMALL_RESULT  */
    STABLE = 671,                  /* STABLE  */
    STANDALONE_P = 672,            /* STANDALONE_P  */
    START = 673,                   /* START  */
    STATEMENT = 674,               /* STATEMENT  */
    STATISTICS = 675,              /* STATISTICS  */
    STDIN = 676,                   /* STDIN  */
    STDOUT = 677,                  /* STDOUT  */
    STORAGE = 678,                 /* STORAGE  */
    STORED = 679,                  /* STORED  */
    STRAIGHT_JOIN = 680,           /* STRAIGHT_JOIN  */
    STRICT_P = 681,                /* STRICT_P  */
    STRIP_P = 682,                 /* STRIP_P  */
    STRUCT = 683,                  /* STRUCT  */
    SUBSCRIPTION = 684,            /* SUBSCRIPTION  */
    SUBSTRING = 685,               /* SUBSTRING  */
    SUMMARIZE = 686,               /* SUMMARIZE  */
    SYMMETRIC = 687,               /* SYMMETRIC  */
    SYSID = 688,                   /* SYSID  */
    SYSTEM_P = 689,                /* SYSTEM_P  */
    TABLE = 690,                   /* TABLE  */
    TABLES = 691,                  /* TABLES  */
    TABLESAMPLE = 692,             /* TABLESAMPLE  */
    TABLESPACE = 693,              /* TABLESPACE  */
    TEMP = 694,                    /* TEMP  */
    TEMPLATE = 695,                /* TEMPLATE  */
    TEMPORARY = 696,               /* TEMPORARY  */
    TEXT_P = 697,                  /* TEXT_P  */
    THEN = 698,                    /* THEN  */
    TIES = 699,                    /* TIES  */
    TIME = 700,                    /* TIME  */
    TIMESTAMP = 701,               /* TIMESTAMP  */
    TIMESTAMPADD = 702,            /* TIMESTAMPADD  */
    TIMESTAMPDIFF = 703,           /* TIMESTAMPDIFF  */
    TO = 704,                      /* TO  */
    TRAILING = 705,                /* TRAILING  */
    TRANSACTION = 706,             /* TRANSACTION  */
    TRANSFORM = 707,               /* TRANSFORM  */
    TREAT = 708,                   /* TREAT  */
    TRIGGER = 709,                 /* TRIGGER  */
    TRIM = 710,                    /* TRIM  */
    TRUE_P = 711,                  /* TRUE_P  */
    TRUNCATE = 712,                /* TRUNCATE  */
    TRUSTED = 713,                 /* TRUSTED  */
    TRY_CAST = 714,                /* TRY_CAST  */
    TYPE_P = 715,                  /* TYPE_P  */
    TYPES_P = 716,                 /* TYPES_P  */
    UNBOUNDED = 717,               /* UNBOUNDED  */
    UNCOMMITTED = 718,             /* UNCOMMITTED  */
    UNENCRYPTED = 719,             /* UNENCRYPTED  */
    UNION = 720,                   /* UNION  */
    UNIQUE = 721,                  /* UNIQUE  */
    UNKNOWN = 722,                 /* UNKNOWN  */
    UNLISTEN = 723,                /* UNLISTEN  */
    UNLOGGED = 724,                /* UNLOGGED  */
    UNPACK = 725,                  /* UNPACK  */
    UNPIVOT = 726,                 /* UNPIVOT  */
    UNTIL = 727,                   /* UNTIL  */
    UPDATE = 728,                  /* UPDATE  */
    USE_P = 729,                   /* USE_P  */
    USER = 730,                    /* USER  */
    USING = 731,                   /* USING  */
    VACUUM = 732,                  /* VACUUM  */
    VALID = 733,                   /* VALID  */
    VALIDATE = 734,                /* VALIDATE  */
    VALIDATOR = 735,               /* VALIDATOR  */
    VALUE_P = 736,                 /* VALUE_P  */
    VALUES = 737,                  /* VALUES  */
    VARCHAR = 738,                 /* VARCHAR  */
    VARIABLE_P = 739,              /* VARIABLE_P  */
    VARIADIC = 740,                /* VARIADIC  */
    VARYING = 741,                 /* VARYING  */
    VERBOSE = 742,                 /* VERBOSE  */
    VERSION_P = 743,               /* VERSION_P  */
    VIEW = 744,                    /* VIEW  */
    VIEWS = 745,                   /* VIEWS  */
    VIRTUAL = 746,                 /* VIRTUAL  */
    VOLATILE = 747,                /* VOLATILE  */
    WEEK_P = 748,                  /* WEEK_P  */
    WEEKS_P = 749,                 /* WEEKS_P  */
    WHEN = 750,                    /* WHEN  */
    WHERE = 751,                   /* WHERE  */
    WHITESPACE_P = 752,            /* WHITESPACE_P  */
    WINDOW = 753,                  /* WINDOW  */
    WITH = 754,                    /* WITH  */
    WITHIN = 755,                  /* WITHIN  */
    WITHOUT = 756,                 /* WITHOUT  */
    WORK = 757,                    /* WORK  */
    WRAPPER = 758,                 /* WRAPPER  */
    WRITE_P = 759,                 /* WRITE_P  */
    XML_P = 760,                   /* XML_P  */
    XMLATTRIBUTES = 761,           /* XMLATTRIBUTES  */
    XMLCONCAT = 762,               /* XMLCONCAT  */
    XMLELEMENT = 763,              /* XMLELEMENT  */
    XMLEXISTS = 764,               /* XMLEXISTS  */
    XMLFOREST = 765,               /* XMLFOREST  */
    XMLNAMESPACES = 766,           /* XMLNAMESPACES  */
    XMLPARSE = 767,                /* XMLPARSE  */
    XMLPI = 768,                   /* XMLPI  */
    XMLROOT = 769,                 /* XMLROOT  */
    XMLSERIALIZE = 770,            /* XMLSERIALIZE  */
    XMLTABLE = 771,                /* XMLTABLE  */
    YEAR_P = 772,                  /* YEAR_P  */
    YEARS_P = 773,                 /* YEARS_P  */
    YES_P = 774,                   /* YES_P  */
    ZONE = 775,                    /* ZONE  */
    NOT_LA = 776,                  /* NOT_LA  */
    NULLS_LA = 777,                /* NULLS_LA  */
    WITH_LA = 778,                 /* WITH_LA  */
    SINGLE_COLON = 779,            /* SINGLE_COLON  */
    CONDITIONLESS_JOIN = 780,      /* CONDITIONLESS_JOIN  */
    POSTFIXOP = 781,               /* POSTFIXOP  */
    UMINUS = 782                   /* UMINUS  */
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

#line 642 "third_party/libpg_query/grammar/grammar_out.hpp"

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
